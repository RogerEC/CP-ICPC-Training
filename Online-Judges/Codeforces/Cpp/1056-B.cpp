#include<iostream>
#include<vector>
using namespace std;
int main()
{
    long long int n, m, cont;
    vector<long long int> resto;
    for(int i=0; i<1000; i++)
        resto.push_back(0);
    cin>>n>>m;
    for(int i=1; i<=m; i++)
    {
        resto[(i*i)%m]+=n/m;
        if(i<=(n%m))
            resto[(i*i)%m]++;
    }
    cont=0;
    for(int i=0; i<1000; i++)
        for(int j=0; j<1000; j++)
            if(resto[i]!=0&&resto[j]!=0)
            {
                if(((i+j)%m)==0)
                    cont+=resto[i]*resto[j];
            }
    cout<<cont<<endl;
    return 0;
}
