#include <bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin >> k;
    if(k % 2 == 0){
        cout << (k/2) - 1 << endl;
    }
    else{
        cout << (k-1)/2 << endl;
    }
    return 0;
}