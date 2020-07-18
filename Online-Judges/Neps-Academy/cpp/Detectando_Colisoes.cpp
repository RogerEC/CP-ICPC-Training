#include<bits/stdc++.h>

using namespace std;

#define MAXN 100100
#define pb push_back
#define mp make_pair
#define ft first
#define sd second
#define fastin cin.sync_with_stdio(0); cin.tie(0)
#define fastout cout.sync_with_stdio(0); cout.tie(0)
typedef long long int lli;
typedef pair<int, int> pii;

int main(){

    fastin; fastout;
    int x[2][2],y[2][2];

    cin>>x[0][0]>>y[0][0]>>x[0][1]>>y[0][1];
    cin>>x[1][0]>>y[1][0]>>x[1][1]>>y[1][1];
    if (x[0][1] < x[1][0] || x[1][1] < x[0][0] || y[0][1] < y[1][0] || y[1][1] < y[0][0] || x[0][0] > x[1][1] || x[1][0] > x[0][1] || y[0][0] > y[1][1] || y[1][0] > y[0][1])
        cout<<0<<endl;
    else
        cout<<1<<endl;

    return 0;
}

