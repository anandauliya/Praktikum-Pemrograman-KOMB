# Target to compile the C++ program
soal_1 : Soal12.o
	g++ Soal12.o -o Soal12

# Target to compile the object file
soal_1.o : Soal12.cpp
	g++ -c Soal12.cpp -o Soal12.o

# Target to test the program
test : Soal12
	./Soal12

# Target to clean up compiled files
clean :
	rm -f Soal12.o Soal12
