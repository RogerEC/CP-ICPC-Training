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
typedef pair<ui, ui> pii;
typedef pair<ll, ll> pll;

bool ordLin(pii a, pii b){return a.f<b.f;}
bool ordCol(pii a, pii b){return a.s<b.s;}

int main(){

    fastin;
    vector<pii> coord;
    int N, Q;
    ui x, y;

    cin>>N>>Q;
    for(int i=0; i<Q; i++){
        cin>>x>>y;
        coord.pb(mp(x, y));
    }

    sort(coord.begin(), coord.end(), ordCol);
    stable_sort(coord.begin(), coord.end(), ordLin);

    for(int i=0; i<Q; i++){
        cout<<coord[i].f<<' '<<coord[i].s<<endl;
    }

    return 0;
}

