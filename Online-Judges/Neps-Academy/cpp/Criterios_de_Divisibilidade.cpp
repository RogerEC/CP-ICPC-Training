#include<bits/stdc++.h>

using namespace std;

int main(){

    string num;
    int soma=0;

    cin>>num;

    if(((int)(num[num.size()-1]-'0')%2)==0)
        cout<<"S"<<endl;
    else
        cout<<"N"<<endl;

    for(unsigned int i=0; i<num.size(); i++)
        soma+=(int)(num[i]-'0');

    if(soma%3==0)
        cout<<"S"<<endl;
    else
        cout<<"N"<<endl;

    if(num[num.size()-1]=='0' || num[num.size()-1]=='5')
        cout<<"S"<<endl;
    else
        cout<<"N"<<endl;

    return 0;
}
