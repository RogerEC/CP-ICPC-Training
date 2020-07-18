#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool maior(pair<int, int> a, pair<int, int> b)
{
    return a.second>b.second;
}
int main()
{
    vector<int> ent;
    vector<pair<int, int>> rept, rept_aux;
    int N, k, aux, cont=0;
    cin>>N>>k;
    for(int i=0; i<N; i++)
    {
        cin>>aux;
        ent.push_back(aux);
    }
    sort(ent.begin(), ent.end());
    rept.push_back(make_pair(ent[0], 1));
    for(int i=1; i<N; i++)
    {
        if(ent[i]!=rept[rept.size()-1].first)
            rept.push_back(make_pair(ent[i], 1));
        else
            rept[rept.size()-1].second++;
    }
    sort(rept.begin(), rept.end(), maior);
    while(cont!=k)
    {
        cont=0;
        for(int i=0; i<k; i++)
        {
            for(int j=0; j<rept[i].second/rept[i+1].second; j++)
            {
                rept_aux.push_back(make_pair(rept[i].first, rept[i].second/rept[i+1].second));
                cont++;
            }
        }
        rept.clear();
        rept=rept_aux;
        rept_aux.clear();
    }
    for(int i=0; i<k; i++)
        if(i!=k-1)
            cout<<rept[i].first<< ' ';
        else
            cout<<rept[i].first<<endl;
    return 0;
}
