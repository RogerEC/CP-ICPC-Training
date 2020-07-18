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

bool primo(lli x){

    if(x==1) return false;
    if(x==2) return true;
    if((x%2)==0) return false;

    for(int i=3; i*i<=x; i+=2)
        if((x%i)==0)
            return false;

    return true;
}

int main(){

    fastin; fastout;
    lli N;

    cin>>N;

    if(primo(N))
        cout<<"S"<<endl;
    else
        cout<<"N"<<endl;

    return 0;
}


