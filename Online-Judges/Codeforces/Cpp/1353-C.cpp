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

vector<ull> calc;

int main(){

    fastin;
    int t;
    ull n, soma, aux;
    calc.pb(0);
    for(ull i=1; i<250100; i++){
        calc.pb(calc[i-1]+8*i*i);
    }
    cin>>t;
    for(int p=0; p<t; p++){
        cin>>n;
        cout<<calc[n/2]<<endl;
    }

    return 0;
}

