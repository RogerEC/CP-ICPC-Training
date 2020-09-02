// Nome: 2344 - Notas da Prova
// Nível: 1
// Assunto: Seleção
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2344

#include<iostream>

using namespace std;

int main(){
    int nota;

    cin>>nota;

    if(nota == 0){
        cout << "E" << endl;
    }else if(nota <= 35){
        cout << "D" << endl;
    }else if(nota <= 60){
        cout << "C" << endl;
    }else if(nota <= 85){
        cout << "B" << endl;
    }else{
        cout << "A" << endl;
    }
    
    return 0;
}