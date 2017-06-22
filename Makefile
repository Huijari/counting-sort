all: clean sort rand

clean:
	rm -rf bin

bin:
	mkdir -p bin

sort: bin src/sort/*
	clang -O3 src/sort/*.c -o bin/sort -Wall

rand: bin src/rand/*
	clang -O3 src/rand/*.c -o bin/rand -Wall
