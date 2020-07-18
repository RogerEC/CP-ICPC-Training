#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int num(int a, int b)
{
    int vet[]={0,1,2,3,4,5};
    for(int i=0; i<6; i++)
        vet[i]=1;
    if(a<0)
        a=0;
    if(b<0)
        b=0;
    vet[0]=0; vet[a]=0; vet[b]=0;
    for(int i=1; i<6; i++)
        if(vet[i]!=0)
            return i;
}

int main()
{
    int n, aux, MAX, MIN;
    vector<int> s, d, a;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>aux;
        a.push_back(aux);
    }
    d.push_back(0);
    for(int i=0; i<n-1; i++)
    {
        if(a[i]<a[i+1])
            d.push_back(1);
        else if(a[i]>a[i+1])
            d.push_back(-1);
        else
            d.push_back(0);
    }
    s.push_back(0);
    for(int i=1; i<d.size(); i++)
        s.push_back(d[i]+s[i-1]);
    MAX=-1000000; MIN=100000;
    for(int i=0; i<s.size(); i++)
    {
        if(MAX<s[i])
            MAX=s[i];
        if(MIN>s[i])
            MIN=s[i];
    }
    if(fabs(MAX-MIN)>4)
        cout<<-1<<endl;
    else
    {
        for(int i=1; i<s.size(); i++)
            if(s[i]==s[i-1])
                s[i]=-1;
        if(d[0]==-1)
            s[0]=5;
        else
            s[0]=1;
        for(int i=1; i<s.size(); i++)
            if(s[i]!=-1)
                s[i]+=(-MIN)+1;

        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==-1&&i==0)
                s[i]=num(0, s[i+1]);
            else if((s[i]==-1)&&(i==s.size()-1))
                s[i]=num(0, s[i-1]);
            else if(s[i]==-1)
                s[i]=num(s[i-1], s[i+1]);
        }
        for(int i=0; i<s.size(); i++)
            if(i!=(s.size()-1))
                cout<<s[i]<<' ';
            else
                cout<<s[i]<<endl;
    }
    return 0;
}
