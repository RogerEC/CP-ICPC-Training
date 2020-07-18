#include<iostream>

using namespace std;
int main(){
    int x, y, z; // up, down, unknown
    bool p=false, n=false;

    cin>>x>>y>>z;
    if(x+z==y && y+z==x){
        cout<<0<<endl;
        return 0;
    }

    if(x+z==y || y+z==x){
        p=n=true;
    }
    else{
        if(x+z>y)
            p=true;
        if(y+z>x)
            n=true;
    }

    if(p && n)
        cout<<"?"<<endl;
    else if(p)
        cout<<"+"<<endl;
    else if(n)
        cout<<"-"<<endl;

    return 0;
}
