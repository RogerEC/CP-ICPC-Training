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
    int n, aux, s1, s2;
    vector<int> a;

    cin>>n;
    for(int i=0; i<2*n; i++){
        cin>>aux;
        a.pb(aux);
    }

    sort(a.begin(), a.end());

    s1=s2=0;
    for(int i=0; i<n; i++){
        s1+=a[i];
        s2+=a[n+i];
    }

    if(s1==s2)
        cout<<-1<<endl;
    else{
        for(int i=0; i<2*n; i++){
            if(i!=(2*n-1))
                cout<<a[i]<<' ';
            else
                cout<<a[i]<<endl;
        }
    }

    return 0;
}

