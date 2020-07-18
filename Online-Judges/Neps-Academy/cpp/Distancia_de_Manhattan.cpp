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
typedef unsigned int ui;
typedef unsigned long long int ulli;
typedef pair<int, int> pii;

int main(){

    fastin; fastout;
    int x1, y1, x2, y2;

    cin>>x1>>y1>>x2>>y2;

    cout<<abs(x1-x2)+abs(y1-y2)<<endl;

    return 0;
}

