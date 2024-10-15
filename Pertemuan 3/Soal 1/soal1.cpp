#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double a = 1;
	double b = -6;
	double c = 9;
	
	double diskriminan, x1, x2;
	
	diskriminan = b*b - 4*a*c;
	
	string expected_output_1 = "Akar real yang sama";
    double expected_output_2 = 3;

	
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
		if ("Akar real yang sama" == expected_output_1 && x1 == expected_output_2) {
            cout << "Test Passed" << endl;
        } else {
            cout << "Test Failed" << endl;
        }
}
	else if (diskriminan < 0){
		cout << "Tidak memiliki akar real" << endl;
}
return 0;
	}
