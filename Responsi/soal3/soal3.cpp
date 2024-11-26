#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> arr={1,2,3,4,5};
    int ganjil=0, genap=0;
    for (int i=0; i<arr.size(); i++){
        if (arr[i]%2==0){
            ++genap;
        }
        else {
            ++ganjil;
        }
    }
    cout <<"jumlah bilangan genap adalah " <<genap<<endl;
    cout <<"jumlah bilangan ganjil adalah "<<ganjil<<endl;
    int expected_genap=2;
    int expected_ganjil=3;
    if (ganjil==expected_ganjil&&genap==expected_genap){
        cout <<"test passed";
    }
    else{
        cout<<"test failed";
    }
    return 0;
}
