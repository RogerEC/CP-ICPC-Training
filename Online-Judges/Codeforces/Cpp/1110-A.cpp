#include<bits/stdc++.h>

using namespace std;

#define MAXN 100100
#define pb push_back
#define mp make_pair
#define ft first
#define sd second
#define fastin ios_base::sync_with_stdio(0); cin.tie(0)
typedef long long int lli;
typedef unsigned int ui;
typedef unsigned long long int ulli;
typedef pair<int, int> pii;

int main(){

    fastin;
    int a, b, k, n;

    cin>>b>>k;
    b%=2;
    n=0;

    if(b==1){
        for(int i=0; i<k; i++){
            cin>>a;
            n+=a;
        }
    }
    else{
        for(int i=0; i<k; i++){
            cin>>a;
        }
        n=a;
    }

    if(n%2==0)
        cout<<"even"<<endl;
    else
        cout<<"odd"<<endl;

    return 0;
}

