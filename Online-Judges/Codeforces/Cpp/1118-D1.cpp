#include<bits/stdc++.h>

using namespace std;

#define MAXN 100100
#define mdc(a, b) (__gcd((a), (b)))
#define mmc(a, b) (((a)*(b))/__gcd((a), (b)))
#define pb push_back
#define mp make_pair
#define ft first
#define sd second
#define fastin ios_base::sync_with_stdio(0); cin.tie(0)
typedef long long int lli;
typedef unsigned int ui;
typedef unsigned long long int ulli;
typedef pair<int, int> pii;

lli a[MAXN], m;
int n;

int main(){

    fastin;

    cin>>n>>m;
    for(int i=0; i<n; i++)
        cin>>a[i];

    sort(a, a+n, greater<lli>());

    return 0;
}

