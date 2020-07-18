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
    ui n, cont=0;
    string str;

    cin>>n;
    cin>>str;

    for(int i=0; i<n; i+=2){
        if(str[i]==str[i+1]){
            cont++;
            if(str[i]=='a'){
                str[i]='b';
            }else{
                str[i]='a';
            }
        }
    }

    cout<<cont<<endl;
    cout<<str<<endl;

    return 0;
}

