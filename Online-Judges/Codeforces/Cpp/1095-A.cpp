#include<iostream>
#include<string>
using namespace std;
int main()
{
    unsigned int n, pos=0;
    string str;
    cin>>n;
    cin>>str;
    for(unsigned int i=0; i<n; i+=pos){
        cout<<str[i];
        pos++;
    }
    cout<<endl;
    return 0;
}
