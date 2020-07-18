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
    ull k, prox;
    int q;
    string s;
    vector<ull> v;
    v.pb(1);
    for(ull i=1; ; i++){
        s+=to_string(i);
        v.pb(v[i-1]+(ull)s.size());
        cout<<s.size()<<endl;
        if(v[i]>1000000000){
            break;
        }
    }

    cin>>q;

    for(int i=0; i<q; i++){
        cin>>k;
        for(ui j=0; j<v.size(); j++){
            if(v[j]<=k){
                prox=v[j];
            }else{
                break;
            }
        }
        cout<<s[k-prox]<<endl;
    }

    return 0;
}

