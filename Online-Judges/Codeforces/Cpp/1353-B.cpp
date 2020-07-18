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
bool funcao(int a, int b){return a<b;}
int main(){

    fastin;
    priority_queue<int> b;
    priority_queue<int, vector<int>, greater<int>> a;
    int t, n, k, auxa, auxb;

    cin>>t;
    for(int p=0; p<t; p++){
        cin>>n>>k;
        for(int i=0; i<n; i++){
            cin>>auxa;
            a.push(auxa);
        }
        for(int i=0; i<n; i++){
            cin>>auxa;
            b.push(auxa);
        }
        for(int i=0; i<k; i++){
            auxa=a.top();
            auxb=b.top();
            if(auxb>auxa){
                a.pop();
                b.pop();
                a.push(auxb);
                b.push(auxa);
            }
        }
        auxa=0;
        while(!a.empty()){
            auxa+=a.top();
            a.pop();
        }
        while(!b.empty()){
            b.pop();
        }
        cout<<auxa<<endl;
    }


    return 0;
}

