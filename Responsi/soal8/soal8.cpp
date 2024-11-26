#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
    int n, kelas1, kelas2;
    vector<int> kelassatu={1,3,5,7};
    vector<int> kelasdua={2,4,6,8};
    vector<int> hasilgabung{};
int main(){
    for (int i=0; i<n; i++){
       merge(kelassatu.begin(), kelassatu.end(), kelasdua.begin(), kelasdua.end(), hasilgabung.begin()){
        if (n == hasilgabung.end()){
        cout <<"test passed";
    }
    else {
        cout << "test failed";
    } 
    return 0;
    }
}
