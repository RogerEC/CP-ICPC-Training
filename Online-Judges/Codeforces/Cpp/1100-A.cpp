#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, aux, soma=0, maior=0;
    vector<int> somas;

    cin>>n>>k;

    for(int i=0; i<k; i++)
        somas.push_back(0);

    for(int i=0; i<n; i++){
        cin>>aux;
        somas[i%k]+=aux;
        soma+=aux;
    }

    for(int i=0; i<k; i++)
        maior=max(maior, abs(soma-somas[i]));

    cout<<maior<<endl;

    return 0;
}
