#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<climits>
using namespace std;

#define inf INT_MAX/2
#define mp make_pair
#define pb push_back
#define ft first
#define sd second
typedef pair<int, int> pii;
typedef vector<pii> vpii; // vector<vector<pair<int, int>>>

vector<vpii> grafo;
vector<int> distancia;
vector<pii> pai;
vector<bool> processado;

void criar_grafo(int TAM){
    vpii aux;
    if(!grafo.empty())
        grafo.clear();
    for(int i=0; i<TAM; i++)
        grafo.pb(aux);
}

void Dijkstra(int S){
    if(!distancia.empty()) distancia.clear();
    if(!processado.empty()) processado.clear();
    if(!pai.empty()) pai.clear();
    for(int i=0; i<(int)grafo.size(); i++){
        distancia.pb(inf);
        pai.pb(mp(-1, 0));
        processado.pb(false);
    }
    distancia[S]=0;

    int pos, adj, dist;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> fila;
    fila.push(mp(distancia[S], S));
    int cont=0;
    while(true){

        pos=-1;

        while(!fila.empty()){

            adj=fila.top().second;
            fila.pop();

            if(!processado[adj]){
                pos=adj;
                break;
            }
        }

        if(pos==-1)
            break;

        for(int i=0; i<grafo[pos].size(); i++){
            adj=grafo[pos][i].sd;
            dist=grafo[pos][i].ft;

            if(distancia[adj]>distancia[pos]+dist){
                distancia[adj]=distancia[pos]+dist;
                fila.push(mp(distancia[adj], adj));
                pai[adj]=mp(pos, cont);
                cont++;
            }
        }
    }
}

int main()
{
    int n, u, v, w=0;

    cin>>n;
    criar_grafo(n);

    for(int i=0; i<n; i++){
        cin>>u>>v;
        u--; v--;
        grafo[u].pb(mp(w, v));
        w++;
        grafo[v].pb(mp(w, u));
        w++;
    }

    Dijkstra(0);

    int pos=0, maior=0;

    for(int i=0; i<n; i++){
        if(maior<pai[i].second){
            maior=pai[i].second;
            pos=i;
        }
    }
    for(int i=0; i<n; i++){
        cout<<pai[i].ft<<' '<<pai[i].sd<<endl;
    }
    cout<<pos+1;
    while(pai[pos].first!=-1){
        cout<<' '<<pai[pos].first+1;
        pos=pai[pos].first;
    }
    cout<<endl;

    return 0;
}
