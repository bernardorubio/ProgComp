#include <iostream>
using namespace std;
int main(){
    int k, n, w;
    cin >> k >> n >> w;
    int preco = (w*(w+1))/2;
    int vf = preco * k;
    if (vf <= n){
        cout << 0 << endl;
    }
    else{
        cout << ((vf-n)) << endl;
    }
    
    return 0;
}