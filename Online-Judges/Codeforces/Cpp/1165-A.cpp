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
    string number;
    ui n, x, y;
    int cont=0;

    cin>>n>>x>>y;
    cin>>number;

    ui i = number.size()-1;
    for(i; i>number.size()-1-y; i--){
        if(number[i]!='0')
            cont++;
            number[i]='0';
    }

    if(number[i]!='1'){
        number[i]='1';
        cont++;
    }

    i--;

    for(i; i>number.size()-1-x; i--){
        if(number[i]!='0')
            cont++;
            number[i]='0';
    }

    cout<<cont<<endl;

    return 0;
}

