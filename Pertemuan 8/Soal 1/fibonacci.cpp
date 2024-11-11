#include <iostream>
using namespace std;

// Fungsi rekursif untuk menghitung bilangan Fibonacci
int fibonacci(int n) {
    // Basis: jika n adalah 0 atau 1
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        // Rekursi: F(n) = F(n-1) + F(n-2)
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n = 6;
    int hasil = fibonacci(n);
    cout << "Bilangan Fibonacci ke-" << n << " adalah: " << hasil << endl;

    if (hasil == 8) {
        cout << "Test passed" << endl;
    } else {
        cout << "Test failed" << endl;
    }
    return 0;
}
