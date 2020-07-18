#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n, cont, tam, l, c;
    string ent;
    cin>>ent;
    tam=ent.size();
    if(tam<=20)
        l=1;
    else if(tam<=40)
        l=2;
    else if(tam<=60)
        l=3;
    else if(tam<=80)
        l=4;
    else
        l=5;
    c=tam/l;
    if((tam%l)!=0)
    {
        c++;
        cont=l-tam%l;
    }
    else
        cont=0;
    cout<<l<<' '<<c<<endl;
    for(int i=l; i>0; i--)
    {
        if(cont==i)
        {
            cout<<ent.substr(0, c-1)+"*"<<endl;
            cont--;
            ent.erase(0, c-1);
        }
        else
        {
            cout<<ent.substr(0, c)<<endl;
            ent.erase(0, c);
        }
    }
    return 0;
}
