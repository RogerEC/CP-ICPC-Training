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

vector<ll> limite;

pii busca(ll x){
    pii resp;
    int ini=0, fim=(int)limite.size(), meio;
    while(ini!=fim){
        meio=(fim+ini)/2;
        if(limite[meio]>x){
            fim=meio;
        }else{
            ini=meio+1;
        }
    }
    resp.f=ini;
    resp.s=limite[(ui)ini-1];
    return resp;
}

int main(){

    fastin;
    pii aux;
    int t, n, k, p1, p2;

    limite.pb(1);
    for(ll i=1; i<=100000; i++){
        limite.pb(limite[(ui)i-1]+i);
    }

    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n>>k;
        aux=busca(k);
        p1=n-1-aux.f;
        p2=n-1-(k-aux.s);
        for(int j=0; j<n; j++){
            if(j==p1 || j==p2)
                cout<<'b';
            else
                cout<<'a';
        }
        cout<<endl;
    }

    return 0;
}

