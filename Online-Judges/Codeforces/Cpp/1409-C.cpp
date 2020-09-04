#include<bits/stdc++.h>

using namespace std;

const int MAXN = 2e5+5;
#define mdc(a, b) (__gcd((a), (b)))
#define mmc(a, b) (((a)*(b))/__gcd((a), (b)))
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define fastin ios_base::sync_with_stdio(0); cin.tie(0)
typedef long long int ll;
typedef unsigned int ui;
typedef unsigned long long int ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

int main(){

    fastin;
    vector<int> vetor;
    int t, x, y, n, mult;

    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n>>x>>y;
        mult=abs(x-y)/(n-1);
        if(abs(x-y)%(n-1)!=0)
            mult++;
        while(abs(x-y)%mult!=0)
            mult++;
        vetor.push_back(max(x, y));
        n--;
        while(n>0 && vetor.back()-mult>0){
            vetor.push_back(vetor.back()-mult);
            n--;
        }
        if(n>0){
            vetor.push_back(max(x,y)+mult);
            n--;
        }
        while(n>0){
            vetor.push_back(vetor.back()+mult);
            n--;
        }
        for(int i=0; i<vetor.size(); i++){
            if(i!=vetor.size()-1){
                cout<<vetor[i]<<' ';
            }else{
                cout<<vetor[i]<<endl;
            }
        }
        vetor.clear();
    }
    
    return 0;
}
