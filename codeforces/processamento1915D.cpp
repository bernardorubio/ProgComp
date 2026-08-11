#include <iostream>
using namespace std;
int main(){
    int palavras;
    cin >> palavras;
    for(int i = 0; i < palavras; i++){
        int letras;
        cin >> letras;
        char anterior = '\0';
        char anteanterior = '\0';
        char atual = '\0';
        char anteante = '\0';
        for(int j = 0; j < letras; j++){
            cin >> atual;
            //alem disso so printar pontos pra nao repetir letra;
            //se CVCV ('cv' 'cv' ou 'cv' 'cvc')entao se for cvcv pode printar ante e anteante;
            //se cvcc ('cvc' e 'cv' ou 'cvc' e 'cvc') entao se for cvcc pode printar ante, anteante e anterior;
            if((anteante == 'b' || anteante == 'c' || anteante == 'd') && (anteanterior == 'a' || anteanterior == 'e') && (anterior == 'b' || anterior == 'c' || anterior == 'd') && (atual == 'a' || atual == 'e')){
                cout << anteante << anteanterior << '.';
                /*anteante = '\0';
                anteanterior = '\0';*/
            }
            else if((anteante == 'b' || anteante == 'c' || anteante == 'd') && (anteanterior == 'a' || anteanterior == 'e') && (anterior == 'b' || anterior == 'c' || anterior == 'd') && (atual == 'b' || atual == 'c' || atual == 'd')){
                cout << anteante << anteanterior << anterior << '.';
                /* anteante = '0';
                anteanterior = '\0';
                anterior = '\0'; */
            }
            if(j == letras-1){
                if((anteanterior == 'b' || anteanterior == 'c' || anteanterior == 'd') && (anterior == 'a' || anterior == 'e') ){
                    cout << anteanterior << anterior << atual;
                }
                else{
                    cout << anterior << atual;
                }
            }
            
            //quase certo mas como as vezes simplesmente não preenche anteante ele nao ta saindo a ultima silaba ou nao ta saindo nada pra palavra mneores que 3;
            anteante = anteanterior;
            anteanterior = anterior;
            anterior = atual;
        }
        cout << endl;
    }
    return 0;
}