all: create bin/main


create:
	mkdir -p build
	mkdir -p bin

bin/main: build/main.o build/arrays.o build/kursor.o build/starter.o
	gcc -Wall -Werror build/main.o build/arrays.o build/kursor.o build/starter.o -o bin/main

build/main.o: src/main.cpp
	g++ -Wall -Werror -c src/main.cpp -o build/main.o

build/arrays.o: src/arrays.c
	gcc -Wall -Werror -c src/arrays.c -o build/arrays.o

build/kursor.o: src/kursor.c
	gcc -Wall -Werror -c src/kursor.c -o build/kursor.o

build/starter.o: src/starter.c
	gcc -Wall -Werror -c src/starter.c -o build/starter.o

.PHONY: clean

clean:
	rm -rf build/*.o
