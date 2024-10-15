#include <iostream>
using namespace std;
 
int main()
{
    int n;
	int input = 5;
    int expected_output[] = {5, 10, 15, 20, 25};
    
    bool test_passed = true;
    for (int i = 0; i < 5; ++i) {
        if (input * (i + 1) != expected_output[i]) {
            test_passed = false;
            break;
        }
    }
    
    if (test_passed) {
        cout << "Test Passed" << endl;
    } else {
        cout << "Test Failed" << endl;
	cout << "Output = " << endl;
    for (int i = 1; i <= 10; ++i) 
        cout << n << " * " << i << " = " << n * i << endl;
    return 0;
    }
}
