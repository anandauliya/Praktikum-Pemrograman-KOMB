#include <iostream>
#include <string>
using namespace std;

struct barang{
	string kode;
	string nama;
	int harga;
	int jumlah;
};

int main(){
	const int n=3;
	barang barang[n];
	
	int totalharga=0;
	int totalbarang=0;
	int ratarata=0;

	// Hardcoded data barang
    barang[0].kode = "A";
    barang[0].nama = "mie";
    barang[0].harga = 2500;
    barang[0].jumlah = 4;
    
    barang[1].kode = "B";
    barang[1].nama = "air";
    barang[1].harga = 5000;
    barang[1].jumlah = 1;
    
    barang[2].kode = "C";
    barang[2].nama = "roti";
    barang[2].harga = 9000;
    barang[2].jumlah = 1;
		
	for (int i=0; i<n;i++){
		totalbarang += barang[i].jumlah;
		totalharga += barang[i].harga*barang[i].jumlah;
	}
		cout<<"Jumlah semua barang adalah "<<totalbarang<<endl;
		ratarata = totalharga/totalbarang;
		cout<<"Rata rata harga barang adalah "<<ratarata<<endl;
	int expected_totalbarang = 6;
    int expected_ratarata = 4000;

    if (totalbarang == expected_totalbarang && ratarata == expected_ratarata) {
        cout << "Test Passed" << endl;
    } else {
        cout << "Test Failed" << endl;
    }

return 0;
}
