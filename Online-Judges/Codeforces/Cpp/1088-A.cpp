#include<iostream>
using namespace std;
int main()
{
    int x, a, b;
    cin>>x;
    bool marc=false;
    for(a=1; a<x; a++){
        for(b=1; b<x; b++){
            if(a%b==0 && a!=b){
                if(a*b>x && a/b<x){
                    marc=true;
                    break;
                }
            }
        }
        if(marc)
            break;
    }
    if(a!=1 && b!=1)
        cout<<a<<' '<<b<<endl;
    else
        cout<<-1<<endl;
    return 0;
}
