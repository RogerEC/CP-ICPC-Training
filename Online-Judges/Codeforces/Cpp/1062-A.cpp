#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int N, MAX=1, cont=0;
  vector<int> a;
  int aux;
  cin >> N;
  a.push_back(0);
  for(int i = 0; i < N; ++i)
  {
    cin >> aux;
    a.push_back(aux);
  }
  a.push_back(1001);
  N += 2;
  for(int i = 0; i < N - 1; ++i)
  {
    if (a[i+1] - a[i] == 1)
      cont++;
    else if (cont > MAX)
    {
      MAX = cont;
      cont = 0;
    }
    else
      cont = 0;
  }
  if (cont > MAX)
    MAX = cont;
  cout << MAX - 1 << endl;
  return 0;
}
