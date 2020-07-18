#include<bits/stdc++.h>

using namespace std;

const int MAXN = 2e5+5;
//#define mdc(a, b) (__gcd((a), (b)))
#define mmc(a, b) (((a)*(b))/__gcd((a), (b)))
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define fastin ios_base::sync_with_stdio(0); cin.tie(0)
typedef long long int lli;
typedef unsigned int ui;
typedef unsigned long long int ulli;
typedef pair<int, int> pii;

lli mdc(lli x, lli y){
    if(y==0)
        return x;
    return mdc(y, x%y);
}

int main(){

    fastin;
    lli a, b, c, d, m, dd, dv;

    cin>>a>>b>>c>>d;

    dd=a*d+b*c;
    dv=b*d;
    m=mdc(dd, dv);

    cout<<dd/m<<' '<<dv/m<<endl;

    return 0;
}

