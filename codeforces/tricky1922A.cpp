#include <bits/stdc++.h>
using namespace std;
int main(){
    //se em t for maiuscula, diferente. se em t for minuscula, igual.
    int t;
    string a, b, c;
    cin >> t;
    for (int T = 0; T < t; T++){
        int k;
        cin >> k;
        cin >> a >> b >> c;
        for(int i = 0; i < k; i++){
            if(c[i] != a[i] && c[i] != b[i]){
                cout << "YES" << endl;
                break;
            }
            if(i == k-1){
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}