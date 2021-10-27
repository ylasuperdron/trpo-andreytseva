all: prog

prog:  Source.o 
	g++  Source.o -o prog  

Source.o:
	g++ Source.cpp -o Source.o -c 
	
test: Source.o test.o 
	g++ test.o Source.o  -o test

test.o: 
	g++ -c test.cpp -o test.o 
	
run:
	prog





