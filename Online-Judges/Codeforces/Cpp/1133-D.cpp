#include<bits/stdc++.h>

using namespace std;

const int MAXN = 2e5+5;
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

int main(){

    fastin;
    map<pii, int> cont;
    int a[MAXN], b[MAXN], n;
    int d, aux=0;

    cin>>n;

    for(int i=0; i<n; i++)
        cin>>a[i];

    for(int i=0; i<n; i++)
        cin>>b[i];

    map<pii, int>::iterator it;

    for(int i=0; i<n; i++){

        if(a[i]==0 && b[i]==0){
            aux++;
            continue;
        }else if(a[i]==0)
            continue;

        d=mdc(abs(a[i]), abs(b[i]));

        if((double)-b[i]/a[i]<0.0){
            if(b[i]>0)
                b[i]*=-1;
            if(a[i]<0)
                a[i]*=-1;
        }else{
            if(b[i]<0)
                b[i]*=-1;
            if(a[i]<0)
                a[i]*=-1;
        }

        it=cont.find(mp(b[i]/d, a[i]/d));

        if(it!=cont.end())
            it->sd++;
        else
            cont.insert(mp(mp(b[i]/d, a[i]/d),1));
    }

    int MAX=0;
    for(it=cont.begin(); it!=cont.end(); ++it)
        MAX=max(MAX, it->sd);

    cout<<MAX+aux<<endl;

    return 0;
}

