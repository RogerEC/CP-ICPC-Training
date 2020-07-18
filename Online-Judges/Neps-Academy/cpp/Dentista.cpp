#include<bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;
typedef vector<pii> vpii;
#define ini first
#define fim second
#define mp make_pair
#define pb push_back

bool menor(pii a, pii b){return a.fim<b.fim;}

int main(){

    vpii consulta;
    int N, cont, aux, aux2;

    cin>>N;
    for(int i=0; i<N; i++){
        cin>>aux>>aux2;
        consulta.pb(mp(aux, aux2));
    }

    sort(consulta.begin(), consulta.end(), menor);

    cont=aux=0;
    for(int i=0; i<N; i++){

        if(consulta[i].ini>=aux){
            cont++;
            aux=consulta[i].fim;
        }
    }

    cout<<cont<<endl;

    return 0;
}
