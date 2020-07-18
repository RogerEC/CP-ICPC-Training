#include<bits/stdc++.h>

using namespace std;

#define MAXN 100100
#define mdc(a, b) (__gcd((a), (b)))
#define mmc(a, b) (((a)*(b))/__gcd((a), (b)))
#define pb push_back
#define mp make_pair
#define ft first
#define sd second
#define fastin ios_base::sync_with_stdio(0); cin.tie(0)
typedef long long int lli;
typedef unsigned int ui;
typedef unsigned long long int ulli;
typedef pair<int, int> pii;

int main(){

    fastin;
    int a, b, c, x, y, z;

    cin>>x>>y>>z;
    cin>>a>>b>>c;

    if(a>=x)
        a-=x;
    else{
        cout<<"NO"<<endl;
        return 0;
    }

    int aux=a+b;

    if(aux>=y)
        aux-=y;
    else{
        cout<<"NO"<<endl;
        return 0;
    }

    if((aux+c)>=z)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
