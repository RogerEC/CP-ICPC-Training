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
    int v=0, o=-1;
    string seq;

    cin>>seq;
    for(ui i=0; i<seq.size(); i++){

        v++;
        if(seq[i]=='O'){
            if(o==-1)
                o=1;
            else
                o++;
        }

        if(((v%3)==0) && ((o%5)==0)){
            o=-1;
            cout<<"fizzbusao"<<endl;
        }else{
            if((v%3)==0){
                cout<<"fizz"<<endl;
            }else if((o%5)==0){
                o=-1;
                cout<<"busao"<<endl;
            }else
                cout<<i+1<<endl;
        }
    }

    return 0;
}
