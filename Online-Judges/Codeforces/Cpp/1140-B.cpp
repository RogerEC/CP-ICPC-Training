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
    int  n, t, resp;
    string seq;

    cin>>t;
    while(t--){

        cin>>n;
        cin>>seq;
        resp=0;
        for(ui i=0; i<seq.size(); i++) if(seq[i]=='>'){resp=i; break;}
        for(ui i=seq.size()-1; i>=0; i--) if(seq[i]=='<'){resp=min(resp, n-1-(int)i); break;}

        cout<<resp<<endl;
    }
    return 0;
}

