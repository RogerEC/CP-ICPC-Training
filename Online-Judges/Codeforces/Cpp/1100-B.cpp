#include<bits/stdc++.h>
using namespace std;

int main()
{
    cin.sync_with_stdio(false);
    cin.tie(NULL);
    int cont=0, aux, n, m;
    vector<int> tipo;

    cin>>n>>m;
    for(int i=0; i<n; i++)
        tipo.push_back(0);

    for(int i=0; i<m; i++){
        cin>>aux;
        tipo[aux-1]++;
        if(tipo[aux-1]==1)
            cont++;

        if(cont==n){
            for(int j=0; j<tipo.size(); j++){
                tipo[j]--;
                if(tipo[j]==0)
                    cont--;
            }
            cout<<1;
        }
        else
            cout<<0;
    }
    cout<<endl;

    return 0;
}
