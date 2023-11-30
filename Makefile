export TOOLCHAIN=$(NDK)/toolchains/llvm/prebuilt/darwin-x86_64
export TARGET=aarch64-linux-android
export API=34
export LD=$(TOOLCHAIN)/bin/ld

# export METAL_CAPTURE_ENABLED=1
# export METAL_DEVICE_WRAPPER_TYPE=1
# export MTL_DEBUG_LAYER=5
# -target x86_64-apple-macos13

llama2:
	clang++ -g -std=c++17 -c gen.cpp -o gen.o
	clang -std=c2x -O2 -g -c compiled/llama2.c -o llama2.o
	clang++ -g -o llama2 gen.o llama2.o

# https://stackoverflow.com/questions/55184167/clang-linking-so-library-libc-shared-so
# https://developer.android.com/ndk/guides/other_build_systems

llama2-aarch64-android:
	$(TOOLCHAIN)/bin/$(TARGET)$(API)-clang++ -static-libstdc++ -std=c++17 -c gen.cpp -o gen.o
	$(TOOLCHAIN)/bin/$(TARGET)$(API)-clang -O2 -c compiled/llama2.c -o llama2.o
	$(TOOLCHAIN)/bin/$(TARGET)$(API)-clang++ -static-libstdc++ -o llama2-aarch64-android gen.o llama2.o

llama2-metal:
	clang++ -std=c++17 -g -framework Metal -framework Foundation -framework QuartzCore gen-metal.cpp -o llama2-metal

clean:
	rm -rf *.o *.dSYM llama2 llama2-metal

.PHONY: llama2
