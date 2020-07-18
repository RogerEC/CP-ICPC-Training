#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

typedef struct pair<int, int> pii;
#define pb push_back
#define mp make_pair
#define f first
#define s second

int main()
{
    int b, y, r, sum[3]={0,0,0};
    cin>>y>>b>>r;
    if((y+1<=b)&&(y+2<=r))
        sum[0]=3*y+3;
    else
        sum[0]=-1;
    if((r-1<=b)&&(r-2<=y))
        sum[1]=r*3-3;
    else
        sum[1]=-1;
    if((b+1<=r)&&(b-1<=y))
        sum[2]=3*b;
    int maior=0;
    for(int i=0; i<3; i++)
        maior=max(maior, sum[i]);
    cout<<maior<<endl;
    return 0;
}
