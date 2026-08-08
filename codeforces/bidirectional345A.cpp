#include <iostream>
using namespace std;
int main(){
    char letr;
    int contig=0;
    cin >> letr;
    if(letr != '<'){
        cout << "No" << endl;
        return 0;
    }
    while(scanf("%c", &letr) == 1){
        if(letr == '='){
            contig++;
        }
        if(letr != '=' && letr != '>'){
            cout << "No" << endl;
            return 0;
        }
        if (letr == '>'){
            if(contig == 0){
                cout << "No" << endl;
                return 0;
            }
            else{
                if(scanf("%c", &letr) == 1){
                    if(letr == '\n'){
                        cout << "Yes" << endl;
                        return 0;
                    }
                    else{
                        cout << "No" << endl;
                        return 0;
                    }
                }
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    return 0;
}