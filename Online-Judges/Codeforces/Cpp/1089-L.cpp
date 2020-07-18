#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool maior(int a, int b){return a<b;}
int main()
{
    vector< vector<pair<int, int>>> lista;
    vector<pair<int, int>> aux2;
    vector<int> tempo, tempos;
    int n, k, aux, cont=0, maximo, soma=0;
    cin>>n>>k;
    for(int i=0; i<k; i++)
        lista.push_back(aux2);
    for(int i=0; i<n; i++){
        cin>>aux;
        lista[aux-1].push_back(make_pair(i, aux));
    }
    for(int i=0; i<n; i++){
        cin>>aux;
        tempo.push_back(aux);
    }
    for(int i=0; i<n; i++)
    {
        if(lista[i].size()>0){
            cont++;
            if(lista[i].size()>1){
                maximo=0;
                for(int j=0; j<lista[i].size(); j++)
                {
                    if(maximo<tempo[lista[i][j].first])
                        maximo=tempo[lista[i][j].first];
                }
                for(int j=0; j<lista[i].size(); j++){
                    if(tempo[lista[i][j].first]!=maximo)
                    tempos.push_back(tempo[lista[i][j].first]);
                }
            }
        }
    }
    sort(tempos.begin(), tempos.end(), maior);
    for(int i=cont; i<k; i++)
    {
        soma+=tempos[i-cont];
    }
    cout<<soma<<endl;
    return 0;
}
