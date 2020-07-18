#include<bits/stdc++.h>

using namespace std;

int main(){

    string num;
    int soma=0, fim;

    cin>>num;

    if(num.size()>1){

        fim=(int)(num[num.size()-2]-'0')*10+(int)(num[num.size()-1]-'0');

        if(fim%4==0)
            cout<<"S"<<endl;
        else
            cout<<"N"<<endl;

        for(unsigned int i=0; i<num.size(); i++)
            soma+=(int)(num[i]-'0');

        if(soma%9==0)
            cout<<"S"<<endl;
        else
            cout<<"N"<<endl;

        if(fim%25==0)
            cout<<"S"<<endl;
        else
            cout<<"N"<<endl;

    }else{

        fim=(int)(num[0]-'0');

        if(fim%4==0)
            cout<<"S"<<endl;
        else
            cout<<"N"<<endl;

        if(fim%9==0)
            cout<<"S"<<endl;
        else
            cout<<"N"<<endl;

        if(fim%25==0)
            cout<<"S"<<endl;
        else
            cout<<"N"<<endl;
    }

    return 0;
}

