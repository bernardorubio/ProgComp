#include <iostream>
using namespace std;
int main(){
    int k;
    cin >> k;
    for (int i = 0; i < k; i++){
        int a, b, c;
        cin >> a >> b >> c;
        if(a + b == c){
            cout << "+" << endl;
        }
        else if(a - b == c){
            cout << "-" << endl;
        }
    }
    return 0;
}