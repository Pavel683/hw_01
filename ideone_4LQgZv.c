#include <iostream> 

int main() { 
	
	objects = main.o map.o wc.o
	edit : $(objects)
        cc -o edit $(objects)
	main.o : main.c
	map.o : map.c
	wc.o : wc.c
	
	
	}