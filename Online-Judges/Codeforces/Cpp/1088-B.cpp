#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool menor(int a, int b){return a<b;}
int main()
{
    int soma, n, k, aux, pos;
    vector<int> vetor;
    cin>>n>>k;
    for(int i=0; i<n; i++){
        cin>>aux;
        vetor.push_back(aux);
    }
    sort(vetor.begin(), vetor.end(), menor);
    soma=pos=0;
    for(int j=0; j<k; j++)
    {
        if(pos<n){
            while(vetor[pos]==0)
                pos++;
            soma+=vetor[pos];
        }
        if(pos<n)
            cout<<vetor[pos]<<endl;
        else
            cout<<0<<endl;
        if(pos<n-1){
            while(vetor[pos+1]==soma)
                pos++;
            if(pos<(n-1))
                vetor[pos+1]-=soma;
        }
        pos++;
    }
    return 0;
}
