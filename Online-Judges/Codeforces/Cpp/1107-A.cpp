#include<bits/stdc++.h>

using namespace std;

int main(){

    int q, n;
    string s;

    cin>>q;
    while(q--){

        cin>>n;
        cin>>s;

        if(s.size()==2 && s[0]>=s[1])
            cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            cout<<2<<endl;
            cout<<s[0]<<' ';
            s.erase(0, 1);
            cout<<s<<endl;
        }
    }

    return 0;
}
