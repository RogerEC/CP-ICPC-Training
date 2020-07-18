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

bool maior(pii a, pii b){return a.f>b.f;}

int main(){

    fastin;
    vector<pii> lata;
    int n, ai, soma;

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>ai;
        lata.pb(mp(ai, i+1));
    }

    sort(lata.begin(), lata.end(), maior);

    soma=0;

    for(int i=0; i<n; i++){
        soma+=(lata[i].f*i+1);
    }

    cout<<soma<<endl;
    for(int i=0; i<n; i++){
        if(i!=(n-1))
            cout<<lata[i].s<<' ';
        else
            cout<<lata[i].s<<endl;
    }

    return 0;
}

