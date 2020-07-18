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
    vector<int> primos;
    vector<bool> flag;
    int n, tam=12000000;

    for(int i=0; i<tam; i++)
        flag.pb(true);

    for(int i=2; i<tam; i++){
        if(flag[i]){
            for(int j=2; i*j<tam; j++)
                flag[i*j]=false;
        }
    }

    for(int i=2; i<tam; i++){
        if(flag[i]){
            primos.pb(i);
        }
    }

    cin>>n;
    cout<<primos[n-1]<<endl;
    return 0;
}

