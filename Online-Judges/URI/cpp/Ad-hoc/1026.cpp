// Nome: 1026 - Carrega ou não Carrega
// Nível: 5
// Assunto: xor
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1026

#include <iostream>

using namespace std;

int main() {
    
    cin.sync_with_stdio(false);
    cin.tie(NULL);
    
    unsigned int a, b;

    while(cin>>a>>b)
        cout<<(a^b)<<endl;

    return 0;
}