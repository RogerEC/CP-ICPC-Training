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
    string linha;
    size_t N, M, n, m;

    cin>>N>>M;
    for(int i=0; i<N; i++){
        cin>>linha;
        if(linha.find("W")!=string::npos){
            n=i+1;
            m=linha.find("W")+1;
        }
    }

    cout<<n<<' '<<m<<endl;

    return 0;
}

