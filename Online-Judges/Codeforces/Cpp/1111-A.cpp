#include<bits/stdc++.h>

using namespace std;

#define MAXN 100100
#define pb push_back
#define mp make_pair
#define ft first
#define sd second
#define fastin cin.sync_with_stdio(0); cin.tie(0)
#define fastout cout.sync_with_stdio(0); cout.tie(0)
typedef long long int lli;
typedef unsigned int ui;
typedef unsigned long long int ulli;
typedef pair<int, int> pii;

bool vogal(char c){

    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        return true;
    else
        return false;
}

int main(){

    fastin; fastout;
    string s, t;

    cin>>s;
    cin>>t;

    if(s.size()==t.size()){

        bool marc=true;

        for(ui i=0; i<t.size(); i++)
            if(vogal(s[i])!=vogal(t[i])){
                marc=false;
                break;
            }

        if(marc)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    else
        cout<<"No"<<endl;

    return 0;
}

