# 第一个Makefile

CCFLAGS = ${CFLAG}
CCFLAGS += -Wall
CCFLAGS += -I inc

main:obj/person.o obj/main.o
	g++ ${CCFLAGS} obj/person.o obj/main.o -o main

obj/person.o:src/person.cpp
	g++ ${CCFLAGS} -c src/person.cpp -o obj/person.o

obj/main.o:src/main.cpp
	g++ ${CCFLAGS} -c src/main.cpp -o obj/main.o

.PHONY: clean
clean:
	rm -rf obj/* main