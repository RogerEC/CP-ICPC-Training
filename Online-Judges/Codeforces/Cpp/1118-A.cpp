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
    lli q, n, a, b;

    cin>>q;

    while(q--){

        cin>>n>>a>>b;

        if(n==1)
            cout<<a<<endl;
        else if((double)a<=(b/2.0))
            cout<<a*n<<endl;
        else
            cout<<((n/2)*b+(n%2)*a)<<endl;
    }

    return 0;
}

