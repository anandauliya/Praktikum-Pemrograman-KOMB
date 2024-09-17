#include <iostream>
using namespace std;
int main (){
	int a, b, c, terbesar, tengah, terkecil;
	
	cout << "Inputkan bilangan 1: ";
	cin >> a;
	
	cout << "Inputkan bilangan 2: ";
	cin >> b;
	
	cout << "Inputkan bilangan 3: ";
	cin >> c;
	
	if (a > b && a > c)	{
		terbesar = a;
}
	else if (b > a && b > c){
		terbesar = b;
}
	else {
		terbesar = c;
}
cout << "Bilangan terbesar adalah " << terbesar << endl;

if (a<b && a<c) {
		terkecil = a;
		if (b<c) {
			tengah = b;
			terbesar = c;
		}
		else {
			tengah = c;
			terbesar = b;
		}
	}
else if (b<a && b<c) {
		terkecil = b;
		if (a<c) {
			tengah = a;
			terbesar = c;
		}
		else {
			tengah = c;
			terbesar = a;
		}
	}
else {
		terkecil = c;
		if (a<b) {
			tengah = b;
			terbesar = a;
		}
		else {
			tengah = b;
			terbesar = a;
		}
	}
	
	cout << "Bilangan dari yang terkecil ke terbesar ";
	switch (terkecil) {
		case 1 ... 999999:
			cout << terkecil << " ";
			break;
	}
	
	switch (tengah) {
		case 1 ... 999999:
			cout << tengah << " ";
			break;
	}
	
	switch (terbesar) {
		case 1 ... 999999:
			cout << terbesar << endl;
			break;
	}
	return 0;
}
