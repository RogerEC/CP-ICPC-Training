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
    int t, n, novo, resto, m;
    vector<int> v;

    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n;
        m=1;
        for(int i=1; ; i++){
            resto=n%10;
            n/=10;
            if(resto!=0){
                v.pb(m*resto);
            }
            m*=10;
            if(n==0)
                break;
        }
        cout<<v.size()<<endl;
        for(ui i=0; i<v.size(); i++){
            if(i!=v.size()-1)
                cout<<v[i]<<' ';
            else
                cout<<v[i]<<endl;
        }
        v.clear();
    }

    return 0;
}

