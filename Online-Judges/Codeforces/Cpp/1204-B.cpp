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
    ll n, r, l, s_min, s_max;

    cin>>n>>l>>r;

    s_min=s_max=0;

    for(int i=0; i<l; i++)
        s_min+=(int)pow(2, i);

    for(int i=0; i<r; i++)
        s_max+=(int)pow(2, i);

    s_min+=n-l;
    s_max+=(int)pow(2, r-1)*(n-r);

    cout<<s_min<<' '<<s_max<<endl;

    return 0;
}




