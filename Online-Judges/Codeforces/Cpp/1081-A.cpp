#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> primo;
    vector<bool> p;
    int tam=1000000000;
    for(int i=0; i<tam; i++)
        p.push_back(true);
    for(int i=2; i*i<tam; i++){
        for(int j=2; i*j<tam; j++)
            p[i*j]=false;
    }
    for(int i=2; i<tam; i++)
        if(p[i])
            primo.push_back(i);
    for(int i=0; i<primo.size(); i++)
        cout<<primo[i]<<endl;
    return 0;
}
