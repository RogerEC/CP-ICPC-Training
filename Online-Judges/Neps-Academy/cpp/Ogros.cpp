#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define ft first
#define sd second
#define fastin cin.sync_with_stdio(0); cin.tie(0)
#define fastout cout.sync_with_stdio(0); cout.tie(0)
typedef long long int lli;
typedef pair<int, int> pii;

vector<int> faixa;
int N;

int buscabinaria(int val){

    int ini=0, fim=N, meio;

    while(true){
        meio=(ini+fim)/2;
        if(faixa[meio]<=val && faixa[meio+1]>val)
            return meio;
        else if(faixa[meio]>val)
            fim=meio-1;
        else
            ini=meio+1;
    }

}

int main(){

    fastin; fastout;
    int M, aux;
    vector<int> premiacao;

    cin>>N>>M;
    faixa.pb(0);
    for(int i=0; i<N-1; i++){
        cin>>aux;
        faixa.pb(aux);
    }
    faixa.pb(INT_MAX);

    for(int i=0; i<N; i++){
        cin>>aux;
        premiacao.pb(aux);
    }

    for(int i=1; i<M; i++){
        cin>>aux;
        cout<<premiacao[buscabinaria(aux)]<<' ';
    }
    cin>>aux;
    cout<<premiacao[buscabinaria(aux)]<<endl;

    return 0;
}
