#include<iostream>
using namespace std;
int main()
{
    int q, r, l, resp;
    cin>>q;
    for(int i=0; i<q; i++)
    {
        cin>>l>>r;
        if((r-l)==0)
        {
            if((r%2)==0)
                cout<<l<<endl;
            else
                cout<<-l<<endl;
        }
        else if(((r-l+1)%2)==0)
        {
            resp=(r-l+1)/2;
            if((r%2)==0)
                cout<<resp<<endl;
            else
                cout<<-resp<<endl;
        }
        else
        {
            resp=((r-l+1)/2)+1;
            if((r%2)==0)
                cout<<resp+1<<endl;
            else
                cout<<-resp<<endl;
        }
    }
    return 0;
}
