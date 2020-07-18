#include<bits/stdc++.h>

using namespace std;

const int MAXN = 1e5+5;
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
    int t[MAXN], contt, conte, MAX, n;
    stack<int> tuna, ell;

    cin>>n;
    for(int i=0; i<n; i++)
        cin>>t[i];

    contt=conte=MAX=0;
    for(int i=0; i<n; i++){
        if(t[i]==1){
            if(contt){
                while(!tuna.empty())
                    tuna.pop();
                MAX=max(MAX, contt);
                contt=0;
            }
            tuna.push(t[i]);
            if(!ell.empty()){
                ell.pop();
                conte++;
            }
        }else if(t[i]==2){
            if(conte){
                while(!ell.empty())
                    ell.pop();
                MAX=max(MAX, conte);
                conte=0;
            }
            ell.push(t[i]);
            if(!tuna.empty()){
                tuna.pop();
                contt++;
            }
        }
    }

    MAX=max(MAX, conte);
    MAX=max(MAX, contt);

    cout<<MAX*2<<endl;

    return 0;
}

