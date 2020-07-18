#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
bool menor(long long int a, long long int b) {return a<b;}
int main()
{
    vector<long long int> pilha;
    vector<pair<long long int, int>> rept;
    long long int soma=0, n, m, cont, desc=0, temp;
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        cin>>temp;
        pilha.push_back(temp);
        soma+=temp;
    }
    cout<<soma<<endl;
    sort(pilha.begin(), pilha.end(), menor);
    rept.push_back(make_pair(pilha[0], 1));
    for(int i=1; i<n; i++)
    {
        if(pilha[i]==pilha[i-1])
            rept[rept.size()-1].second++;
        else
            rept.push_back(make_pair(pilha[i], 1));
    }
    for(int i=1; i<rept.size(); i++)
    {
        if(fabs(rept[i-1].first-rept[i].first)>rept[i].second)
            desc+=fabs(rept[i-1].first-rept[i].first)-rept[i].second;
    }
    if(rept[0].first>rept[0].second)
            desc+=rept[0].first-rept[0].second;
    cout<<soma-desc-n<<endl;
    return 0;
}
