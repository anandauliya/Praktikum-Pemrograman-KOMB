#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double a,b,c;
	double diskriminan, x1, x2;
	
	cout << "Masukkan nilai a: ";
	cin >> a;
	
	cout << "Masukkan nilai b: ";
	cin >> b;
	
	cout << "Masukkan nilai c: ";
	cin >> c;
		
	diskriminan = b*b - 4*a*c;
	
	if (diskriminan > 0){
		x1 = (-b + sqrt(diskriminan))/(2*a);
		x2 = (-b - sqrt(diskriminan))/(2*a);
		cout << "Dua akar real yang berbeda" << endl;
		cout << "Akar 1: " << x1 << endl;
		cout << "Akar 2: " << x2 << endl;
}
	else if (diskriminan == 0){
		x1 = -b/(2*a);
		cout << "Akar real yang sama" << endl;
		cout << "Akar: " << x1 << endl;	
}
	else if (diskriminan < 0){
		cout << "Tidak memiliki akar real" << endl;
}
return 0;
	}
