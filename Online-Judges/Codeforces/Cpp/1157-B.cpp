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
    ui n;
    string number;
    char digit[10];
    bool flag=false;

    cin>>n;
    cin>>number;

    for(int i=0; i<9; i++)
        cin>>digit[i];

    for(ui i=0; i<n; i++){

        if(number[i]==digit[(ui)(number[i]-'1')])
            continue;
        else if(number[i]<digit[(ui)(number[i]-'1')]){
            number[i]=digit[(ui)(number[i]-'1')];
            flag=true;
        }
        else if(flag)
            break;
    }

    cout<<number<<endl;

    return 0;
}

