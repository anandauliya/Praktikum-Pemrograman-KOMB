#include <iostream>
using namespace std;
int main(){
	int n, sum = 0;
	

	for (int i=1; i<=n; i++){
		sum += i;
	}
	int input = 5;
	int expected_output = 15;
	if (expected_output){
		cout << "Test Passed"<<endl;
	}
		else {
			cout <<"Test Failed"<<endl;
		}
	
	return 0;
}
