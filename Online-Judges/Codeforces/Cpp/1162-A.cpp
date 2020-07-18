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
typedef struct{
    int l, r, h;
}RESTRICAO;

bool menor(RESTRICAO a, RESTRICAO b){ return a.h<b.h;}

int main(){

    fastin;
    int n, h, m, ganho=0;
    RESTRICAO v[50];
    bool flag[50];

    cin>>n>>h>>m;

    for(int i=0; i<n; i++)
        flag[i]=false;

    for(int i=0; i<m; i++){
        cin>>v[i].l>>v[i].r>>v[i].h;
    }

    sort(v, v+m, menor);

    for(int i=0; i<m; i++){
        for(int j=v[i].l-1; j<v[i].r; j++){
            if(!flag[j]){
                flag[j]=true;
                ganho+=v[i].h*v[i].h;
            }
        }
    }

    for(int i=0; i<n; i++){
        if(!flag[i])
            ganho+=h*h;
    }

    cout<<ganho<<endl;

    return 0;
}

