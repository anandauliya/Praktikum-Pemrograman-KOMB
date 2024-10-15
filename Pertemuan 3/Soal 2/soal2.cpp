#include <iostream>
using namespace std;
int main (){
	int terbesar, tengah, terkecil;
	
	int a = 15;
	int b = 7;
	int c = 22;
	
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
	
	cout << "Bilangan dari yang terkecil ke terbesar: " 
         << terkecil << ", " << tengah << ", " << terbesar << endl;
 
    int expected_terbesar = 22;
    int expected_terkecil = 7;
    int expected_tengah = 15;

    if (terbesar == expected_terbesar && terkecil == expected_terkecil && tengah == expected_tengah) {
        cout << "Test Passed" << endl;
    } else {
        cout << "Test Failed" << endl;
    }
	return 0;
}
