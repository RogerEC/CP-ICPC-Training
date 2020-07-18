#include<iostream>
using namespace std;
int main()
{
    int n, x, y, d, t, resp;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n>>x>>y>>d;
        if((y-x)%d==0)
            cout<<(y-x)/d<<endl;
        else if((y-1)%d==0)
        {
            if((x%d)<=1)
                cout<<(y-1)/d+x/d<<endl;
            else
                cout<<(y-1)/d+x/d+1<<endl;
        }
        else
            cout<<-1<<endl;
    }
}
