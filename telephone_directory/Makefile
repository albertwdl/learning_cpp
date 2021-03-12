# 第一个Makefile

main:obj/person.o obj/main.o
	g++ -g obj/person.o obj/main.o -o main

obj/person.o:src/person.cpp
	g++ -g -I inc -c src/person.cpp -o obj/person.o

obj/main.o:src/main.cpp
	g++ -g -I inc -c src/main.cpp -o obj/main.o

.PHONY: clean
clean:
	rm -rf obj/* main