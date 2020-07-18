#include<iostream>
using namespace std;
int main()
{
    int r, l, x, y, t, marc=0;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>l>>r;
        marc=0;
        for(x=l; ; x++){
            for(y=r; y>=1; y--){
                if((y!=x)&&(y%x==0)){
                    marc=1;
                    break;
                }
            }
            if(marc==1)
                break;
        }
        cout<<x<<' '<<y<<endl;
    }
    return 0;
}
