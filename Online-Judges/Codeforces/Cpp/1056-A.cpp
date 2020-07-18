#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n, aux, r;
    vector<int> linha;
    for(int i=0; i<101; i++)
        linha.push_back(0);
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>r;
        for(int i=0; i<r; i++)
        {
            cin>>aux;
            linha[aux]++;
        }
    }
    aux=0;
    for(int i=0; i<101; i++)
    {
        if(linha[i]==n)
        {
            if(aux==0)
            {
                cout<<i;
                aux=1;
            }
            else
                cout<<" "<<i;
        }
    }
    cout<<endl;
    return 0;
}
