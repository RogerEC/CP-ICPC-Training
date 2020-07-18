#include<iostream>
using namespace std;
int main()
{
    int t, x, cont, x2;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>x;
        x2=cont=0;
        for(int j=0; ; j++){
            if(((x-x2)<8)&&((x-x2)>1)){
                cont++;
                break;
            }
            x2+=2;
            cont++;
        }
        cout<<cont<<endl;
    }
    return 0;
}
