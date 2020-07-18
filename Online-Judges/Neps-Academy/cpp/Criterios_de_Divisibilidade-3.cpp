#include<bits/stdc++.h>

using namespace std;

int main(){

    string num;
    int p=0, s=0;

    cin>>num;

    for(unsigned int i=0; i<num.size(); i++)
        if((i%2)==0)
            s+=(int)(num[i]-'0');
        else
            p+=(int)(num[i]-'0');

    if(((s-p)%11)==0)
        cout<<"S"<<endl;
    else
        cout<<"N"<<endl;

    return 0;
}

