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
    int t, n, aux;
    vector<int> a;
    vector<bool> flag;

    cin>>t;

    while(t--){
        cin>>n;
        for(int i=0; i<2*n; i++){
            cin>>aux;
            a.pb(aux);
            flag.pb(false);
        }

        for(int i=0; i<2*n; i++){
            if(!flag[a[i]-1]){
                if(i!=(2*n-1)){
                    cout<<a[i]<<' ';
                }else{
                    cout<<a[i];
                }
                flag[a[i]-1]=true;
            }
        }

        cout<<endl;

        a.clear();
        flag.clear();
    }

    return 0;
}

