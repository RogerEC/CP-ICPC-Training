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

    int t, a, b;

    cin>>t;
    for(int i=0; i<t; i++){
        cin>>a>>b;
        if((a%b)==0){
            cout<<0<<endl;
        }else{
            cout<<(b-a%b)<<endl;
        }
    }

    return 0;
}
