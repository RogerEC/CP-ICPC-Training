#include<iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    long long resp = 0;
    for (int i=2; i<=N; i++)
    {
        for (int j=i+i; j<=N; j+=i)
        {
            resp+=j/i;
        }
    }
    cout<<(resp<<2)<<endl;
    return 0;
}
