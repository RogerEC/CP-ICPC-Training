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
    vector<bool> eh_primo;
    int n;

    cin>>n;
    for(int i=0; i<=n; i++)
        eh_primo.pb(true);

    for(int i=2; i*i<=n; i++){
        if(eh_primo[i]){
            for(int j=2; j*i<=n; j++){
                eh_primo[i*j]=false;
            }
        }
    }

    if(n>=2)
        cout<<2;
    for(int i=3; i<=n; i++){
        if(eh_primo[i])
            cout<<' '<<i;
    }
    cout<<endl;

    return 0;
}

