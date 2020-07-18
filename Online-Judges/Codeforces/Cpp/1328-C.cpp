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
    string x, a, b;
    ui t, n;

    cin>>t;
    for(ui i=0; i<t; i++){
        cin>>n;
        cin>>x;
        a='1';
        b='1';
        for(ui j=1; j<n; j++){
            if(x[j]=='0'){
                a+='0';
                b+='0';
            }else if(x[j]=='1'){
                a+='1';
                b+='0';
            }else{
                if(a[a.size()-1]=='1' && b[b.size()-1]=='0'){
                    a+='0';
                    b+='2';
                }else if(a[a.size()-1]=='0' && b[b.size()-1]=='1'){
                    a+='2';
                    b+='0';
                }else{
                    a+='1';
                    b+='1';
                }
            }
        }
        cout<<a<<endl;
        cout<<b<<endl;
    }

    return 0;
}

