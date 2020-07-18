#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

bool maior(lli a, lli b){return a>b;}

int main(){

    lli soma=0, aux;
    int ini=1, fim, n, k, cont=0;
    vector<lli> dano;
    string botao;

    cin>>n>>k;
    dano.push_back(0);
    for(int i=0; i<n; i++){
        cin>>aux;
        dano.push_back(aux);
    }
    dano.push_back(0);
    cin>>botao;
    botao=botao[0]+botao+botao[botao.size()-1];

    for(unsigned int i=1; i<botao.size(); i++){
        if(botao[i]==botao[i-1] && i!=(botao.size()-1))
            cont++;
        else{
            if(cont<=k){
                for(int j=ini; j<(int)i; j++)
                    soma+=dano[j];
            }else{

                sort(dano.begin()+ini, dano.begin()+i, maior);
                for(int j=ini; j<ini+k; j++){
                    soma+=dano[j];
                }
            }
            ini=(int)i;
            cont=1;
        }
    }

    cout<<soma<<endl;

    return 0;
}
