#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<set>
using namespace std;

typedef pair<int, int> pii;
typedef long long int lli;
#define pb push_back
#define mp make_pair
#define f first
#define s second

int main()
{
    lli n, aux;
    set<lli> resp;
    cin>>n;

    for(int i=1; i*i<=n; i++){
        if(n%i==0){
            lli r=n/i;
            resp.insert(((2+n-r)*(n/r))/2);
            r=n/r;
            resp.insert(((2+n-r)*(n/r))/2);
        }
    }

    for(set<lli>::iterator it=resp.begin(); it!=resp.end(); ++it)
        if(it!=resp.begin())
            cout<<' '<<*it;
        else
            cout<<*it;
    cout<<endl;

    return 0;
}
