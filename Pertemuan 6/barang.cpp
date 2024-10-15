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
	const int max=50;
	barang barang[max];
	
	int totalharga=0;
	int totalbarang=0;
	int ratarata=0;
	int n;
	
	cout <<"Masukkan banyak jenis barang: ";
	cin >> n;
		
	for (int i=0; i<n;i++){
		cout <<"Masukkan kode barang: ";
		cin >> barang[i].kode;
	
		cout <<"Masukkan nama barang: ";
		cin >> barang[i].nama;
	
		cout <<"Masukkan harga barang: ";
		cin >> barang[i].harga;
	
		cout <<"Masukkan jumlah barang: ";
		cin >> barang[i].jumlah;

		totalbarang += barang[i].jumlah;
		totalharga += barang[i].harga*barang[i].jumlah;
	
	}
		cout<<"Jumlah semua barang adalah "<<totalbarang<<endl;
		ratarata = totalharga/totalbarang;
		cout<<"Rata rata harga barang adalah "<<ratarata<<endl;
	

return 0;
}
