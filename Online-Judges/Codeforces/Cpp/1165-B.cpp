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
    vector<int> a;
    int n, aux;

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>aux;
        a.pb(aux);
    }

    int cont=0, dia=1;
    sort(a.begin(), a.end());

    for(int i=0; i<n; i++){
        if(dia<=a[i]){
            dia++;
            cont++;
        }
    }

    cout<<cont<<endl;

    return 0;
}

