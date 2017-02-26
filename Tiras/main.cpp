#include <iostream>
#include <algorithm>
using namespace std;
struct tira
{
	long long int start, end;
};
int N, ans;
long long int l, FStart=-1;

bool cmp(tira a, tira b)
{
	return a.end < b.end;
}

int main ()
{
	cin >> N;
	tira Tira[N];
	for(int i=0; i<N; i++)
	{
		cin >> Tira[i].start >> l;
		Tira[i].end = Tira[i].start+l;
	}
	sort(Tira, Tira+N, cmp);
	for(int i=0; i<N; i++)
	{
		if(Tira[i].start > FStart)
			FStart = Tira[i].end;
		else
			ans++;
	}
	cout << ans << "\n";
	return 0;
}
