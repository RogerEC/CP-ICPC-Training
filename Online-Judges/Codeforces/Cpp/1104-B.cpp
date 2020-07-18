#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    stack<char> pilha;

    cin>>str;
    for(unsigned int i=0; i<str.size(); i++){
        if(pilha.empty() || (!pilha.empty() && str[i]!=pilha.top()))
            pilha.push(str[i]);
        else
            pilha.pop();
    }

    if(((str.size()-pilha.size())/2)%2==0)
        cout<<"No"<<endl;
    else
        cout<<"Yes"<<endl;

    return 0;
}
