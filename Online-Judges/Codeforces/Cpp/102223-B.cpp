#include<iostream>
#include<vector>

using namespace std;

const int MAXN = 2e5+100;

int tempo_corte[MAXN];
vector<int> arvore[MAXN];

void corta_fio(int pos, int tempo){

    if(tempo_corte[pos]!=-1)
        return;

    tempo_corte[pos]=tempo;

    if(arvore[pos].size()!=0){
        for(int i=0; i<arvore[pos].size(); i++){
            corta_fio(arvore[pos][i], tempo);
        }
    }
    return;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, aux;

    cin>>N;

    for(int i=0; i<N; i++){
        cin>>aux;
        if(aux!=-1);
            arvore[aux-1].push_back(i);
    }

    for(int i=0; i<N; i++)
        tempo_corte[i]=-1;

    for(int i=0; i<N; i++){
        cin>>aux;
        corta_fio(aux-1, i+1);
    }

    for(int i=0; i<N; i++){
        if(i!=N-1)
            cout<<tempo_corte[i]<<' ';
        else
            cout<<tempo_corte[i]<<endl;
    }

    return 0;
}
