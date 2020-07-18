#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool menor(pair<long long int, int> a, pair<long long int, int> b)
{
    return a.first<b.first;
}

int main()
{
    long long int soma, N, aux;
    vector<pair<long long int, int>> vetor;
    vector<int> ji;
    int resp=0;
    cin>>N;
    soma=0;
    for(int i=0; i<N; i++)
    {
        cin>>aux;
        soma+=aux;
        vetor.push_back(make_pair(aux, i+1));
    }
    sort(vetor.begin(), vetor.end(), menor);
    soma-=vetor[N-1].first;
    for(int i=0; i<N; i++)
    {
        if(i!=N-1)
        {
            if(vetor[N-1].first==(soma-vetor[i].first))
            {
                resp++;
                ji.push_back(vetor[i].second);
            }
        }
        else
        {
            if(vetor[N-2].first==(soma-vetor[N-2].first))
            {
                resp++;
                ji.push_back(vetor[i].second);
            }
        }
    }
    if(resp==0)
        cout<<resp<<endl;
    else
    {
        cout<<resp<<endl;
        for(int i=0; i<ji.size(); i++)
        {
            if(i==ji.size()-1)
                cout<<ji[i]<<endl;
            else
                cout<<ji[i]<<' ';
        }
    }
    return 0;
}
