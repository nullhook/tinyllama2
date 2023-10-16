llama2: llama2.o gen.o
	clang++ -o llama2 gen.o llama2.o

gen.o: gen.cpp
	clang++ -std=c++17 -c gen.cpp -o gen.o

llama2.o: compiled/llama2.c
	clang -O2 -c compiled/llama2.c -o llama2.o

clean:
	rm -rf *.o
