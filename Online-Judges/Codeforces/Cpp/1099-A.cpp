#include<bits/stdc++.h>
using namespace std;
#define f first
#define s second
int main()
{
    pair<int, int> ent[3];

    for(int i=0; i<3; i++)
        cin>>ent[i].f>>ent[i].s;

    for(int i=ent[0].s; i>0; i--){
        ent[0].f+=i;
        if(i==ent[1].s)
            ent[0].f-=ent[1].f;
        else if(i==ent[2].s)
            ent[0].f-=ent[2].f;
        if(ent[0].f<0)
            ent[0].f=0;
    }

    cout<<ent[0].f<<endl;

    return 0;
}
