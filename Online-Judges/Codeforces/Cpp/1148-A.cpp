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
    ll a, b, c;

    cin>>a>>b>>c;

    if((a+b)>2*min(a, b)){
        cout<<(min(a,b)*2+c*2+1)<<endl;
    }else{
        cout<<(min(a,b)*2+c*2)<<endl;
    }

    return 0;
}

