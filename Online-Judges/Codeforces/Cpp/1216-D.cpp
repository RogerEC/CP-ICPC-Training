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
    ll n, soma=0, aux, MAX=0, MDC;
    vector<ll> vet;

    cin>>n;
    for(ll i=0; i<n; i++){
        cin>>aux;
        vet.pb(aux);
        MAX=max(MAX, aux);
    }

    MDC=mdc(MAX-vet[0], MAX-vet[1]);
    soma+=(MAX-vet[0]);
    soma+=(MAX-vet[1]);

    for(int i=2; i<n; i++){
        MDC=mdc(MDC, MAX-vet[i]);
        soma+=(MAX-vet[i]);
    }

    cout<<soma/MDC<<' '<<MDC<<endl;

    return 0;
}

