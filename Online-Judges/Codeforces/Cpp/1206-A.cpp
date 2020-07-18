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
    vector<int> A, B;
    set<int> uniaoAB;
    int aux, n, m;

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>aux;
        A.pb(aux);
        uniaoAB.insert(aux);
    }

    cin>>m;
    for(int i=0; i<m; i++){
        cin>>aux;
        B.pb(aux);
        uniaoAB.insert(aux);
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(uniaoAB.find(A[i]+B[j])==uniaoAB.end()){
                cout<<A[i]<<' '<<B[j]<<endl;
                return 0;
            }
        }
    }

    return 0;
}

