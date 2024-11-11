#include <iostream>
using namespace std;

float hitungratarata(int angka[], int n) {
    if (n == 1) {
        return angka[0];
    }
    return ((hitungratarata(angka, n - 1) * (n - 1)) + angka[n - 1]) / n;
}

int main() {
    int angka[]= {1,2,3,4,5,6,7,8,9,10};
    int n= 10;
    
    float ratarata = hitungratarata(angka, n);
    
    cout << "Rata-rata dari angka yang dimasukkan adalah: " << ratarata << endl;
    if (ratarata == 5.5) {
        cout << "Test passed" << endl;
    } else {
        cout << "Test failed" << endl;
    }

    return 0;
}
