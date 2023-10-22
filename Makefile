export TOOLCHAIN=$(NDK)/toolchains/llvm/prebuilt/darwin-x86_64
export TARGET=aarch64-linux-android
export API=34
export LD=$(TOOLCHAIN)/bin/ld


llama2:
	clang++ -std=c++17 -c gen.cpp -o gen.o
	clang -O2 -c compiled/llama2.c -o llama2.o
	clang++ -o llama2 gen.o llama2.o

# https://stackoverflow.com/questions/55184167/clang-linking-so-library-libc-shared-so
# https://developer.android.com/ndk/guides/other_build_systems

llama2-aarch64-android:
	$(TOOLCHAIN)/bin/$(TARGET)$(API)-clang++ -static-libstdc++ -std=c++17 -c gen.cpp -o gen.o
	$(TOOLCHAIN)/bin/$(TARGET)$(API)-clang -O2 -c compiled/llama2.c -o llama2.o
	$(TOOLCHAIN)/bin/$(TARGET)$(API)-clang++ -static-libstdc++ -o llama2-aarch64-android gen.o llama2.o

clean:
	rm -rf *.o


.PHONY: llama2
