.PHONY: run

run: a.out
	@./a.out

a.out: main.cpp
	g++ -O0 -ggdb main.cpp