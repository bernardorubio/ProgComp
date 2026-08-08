#include <iostream>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    int d, z;
    d = n % k;
    n = n - d;
    z = n/k;
    cout << (z+1)*k << endl;
    return 0;   
}