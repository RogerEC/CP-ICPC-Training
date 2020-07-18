#include <bits/stdc++.h>

using namespace std;

/*struct node{
    vector< node *> filho;
    int valor;
};*/
#define mdc(a, b) (__gcd((a), (b)))
#define mmc(a, b) (((a)*(b))/__gcd((a), (b)))
#define For(a,b) for(int i=a;i<b;i++)
#define Fori(a,b) for(int i=b;i>=a;i--)
#define IO cin.tie(0); cin.sync_with_stdio(0);
#define I int ii; cin >> ii;
#define D double dd; cin >> dd;
#define S string ss; cin >> ss;


int main()
{
    IO;
    vector<long int> A;
    long long int n,l1=-1,l2=-1,r1=-1,r2=-1,d,aux;
    string s;

    cin >> s;
    aux=0;
    for(int i=0;i<s.size();i++){
        if(s[i] == '[' && aux==0){
            aux = 1;
            l1 = i;
        }
        if(aux==1 && s[i] == ':'){
            l2 = i;
            break;
        }
    }

    if(l1==-1 || l2==-1){
        cout << -1 << endl;
        return 0;
    }

    aux=0;
    for(int i=s.size()-1;i>=0;i--){

        if(s[i] == ']' && aux==0){
            aux = 1;
            r1 = i;
        }
        if(aux==1 && s[i] == ':'){

            r2 = i;
            break;
        }
    }

    if(r1==-1 || r2==-1){
        cout << -1 << endl;
        return 0;
    }

    if(r2 == l2){
        cout << -1 << endl;
        return 0;
    }
    long long int sum=0;
    for(int i=l2+1;i<r2;i++){
        if(s[i]=='|'){
            sum++;
        }
    }

    cout << sum+4 << endl;
    return 0;
}
