#include<iostream>
#include<vector>
using namespace std;

typedef long long int ll;

vector<pair<int,int>> fn;
int resp;

bool chk()
{
	for(auto p : fn)
		if(p.second > 1)
            return 0;
	return 1;
}

void act()
{
	bool is = 0;
	for(auto &p : fn)
		if(p.second&1)is = 1;
	if(!is)
	{
		for(auto &p : fn)
			p.second/=2;
	}
	else
	{
		int mx = 1;
		for(auto p : fn)mx = max(mx,p.second);
		int lv = 1;
		while(lv < mx)lv<<=1;
		for(auto &p : fn)p.second = lv;
	}
}

int msol()
{
	int r = 1;
	for(auto p : fn)
		r *= p.first;
	return r;
}

int main()
{
	int N;
	cin>>N;
	for(int i = 2; i<=N; ++i)
	{
		if(N%i)continue;
		int c = 0;
		while(N%i==0)N/=i,++c;
		fn.emplace_back(i,c);
	}
	while(1)
	{
		if(chk())
            break;
		act();
		resp++;
	}
	cout<<msol()<<" "<<resp<<endl;

   return 0;
}
