# Target to compile the C++ program
soal_1 : barang.o
	g++ barang.o -o barang

# Target to compile the object file
soal_1.o : barang.cpp
	g++ -c barang.cpp -o barang.o

# Target to run the program
run : barang
	./barang

# Target to clean up compiled files
clean :
	rm -f barang.o barang
