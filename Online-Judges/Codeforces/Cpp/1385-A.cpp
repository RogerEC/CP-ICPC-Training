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
    ui x, y, z, t;

    cin>>t;

    while(t--){

        cin>>x>>y>>z;

        if(x==y && y==z){
            cout<<"YES"<<endl;
            cout<<x<<' '<<y<<' '<<z<<endl;
        }else if((x==y && z<x) || (x==z && y<x) || (z==y && x<y)){
            cout<<"YES"<<endl;
            cout<<max(x, max(y, z))<<' '<<min(x, min(y, z))<<' '<<1<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}

