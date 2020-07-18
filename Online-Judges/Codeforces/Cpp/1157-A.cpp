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

set<int> numbers;
void calc(int x){

    if(numbers.find(x)!=numbers.end())
        return;

    numbers.insert(x);
    x++;

    while(x%10==0)
        x/=10;

    calc(x);
}

int main(){

    fastin;
    int n;

    cin>>n;

    calc(n);

    cout<<numbers.size()<<endl;

    return 0;
}

