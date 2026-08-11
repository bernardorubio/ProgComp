#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0 ){
            cout << 0;
        }
        else{
            cout << 1;
        }
    }
    cout << endl;
    return 0;
}