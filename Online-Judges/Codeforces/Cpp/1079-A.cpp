#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
    int n, k, aux, MAX, soma=0;
    vector<int> ut;
    vector<int> cont;
    cin>>n>>k;
    for(int i=0; i<n; i++)
    {
        cin>>aux;
        ut.push_back(aux);
    }
    for(int i=0; i<101; i++)
        cont.push_back(0);
    for(int i=0; i<n; i++)
        cont[ut[i]]++;
    MAX=0;
    for(int i=0; i<cont.size(); i++)
    {
        if(cont[i]!=0)
        {
            aux=cont[i]/k;
            if((cont[i]%k)!=0)
                aux++;
            if(aux>MAX)
                MAX=aux;
        }
    }
    for(int i=0; i<cont.size(); i++)
    {
        if(cont[i]!=0)
            soma+=(MAX*k-cont[i]);
    }
    cout<<soma<<endl;
    return 0;
}
