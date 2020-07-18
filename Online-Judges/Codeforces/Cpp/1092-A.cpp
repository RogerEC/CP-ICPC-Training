#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n, k, t, cont, letra;
    string saida;
    cin>>t;
    for(int s=0; s<t; s++){
        cin>>n>>k;
        cont=letra=0;
        for(int i=0; i<k; i++){
            for(int j=0; j<n/k; j++){
                saida+=(char)('a'+letra);
            }
            if(cont<n%k){
                saida+=(char)('a'+letra);
                cont++;
            }
            letra++;
        }
        cout<<saida<<endl;
        saida.clear();
    }
    return 0;
}
