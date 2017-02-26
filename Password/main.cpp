#include <iostream>
#define MAXN 200005
#define mid ((l+r)/2)
#define left (2*n)+1
#define right (2*n)+2
using namespace std;
typedef long long int lld;
long long int N, K;
string Clave1, ans;
long long int Type, Left, Right, Lazy[4*MAXN], lindex, k;
char Tree[4*MAXN], retvalue;

char ConvertChar(int i)
{
	return i+'a';
}

int ConvertInt(char a)
{
	return a-'a';
}

void Create(int l, int r, int n)
{
	if(l == r)
	{
		Tree[n] = Clave1[l];
		return;
	}
	Create(l, mid, left);
	Create(mid+1, r, right);
}

void Update(int l, int r, int n)
{
	if(l > Right || r < Left)
		return;
	if((l >= Left && r <= Right) || l == r)
	{
		Lazy[n]+=k;
		Lazy[n]%= 26;
		return;
	}
	Update(l, mid, left);
	Update(mid+1, r, right);
}

char Query(int l, int r, int n, int x)
{
	if(Lazy[n] && l < r)
	{
		Lazy[left]+= Lazy[n];
		Lazy[right]+= Lazy[n];
		Lazy[left]%= 26;
		Lazy[right]%=26;
		Lazy[n] = 0;
	}
	if(l == r && l == x)
	{
		retvalue = ConvertChar((ConvertInt(Tree[n])+Lazy[n])%26);
		return retvalue;
	}
	if(x > mid)
		return Query(mid+1, r, right, x);
	else
		return Query(l, mid, left, x);
}

int main ()
{
	cin >> N >> K;
	cin >> Clave1;
	for(int i=0; i<100000; i++)
		Clave1+= 'a';
	N+= 100000;
	Create(0, N-1, 0);
	for(int i=0; i<K; i++)
	{
		cin >> Type;
		if(Type == 1)
		{
			cin >> Left >> Right >> k;
			Left = (Left+lindex)-1;
			Right = (Right+lindex)-1;
			k%= 26;
			Update(0, N-1, 0);
		}
		else
		{
			ans+= Query(0, N-1, 0, lindex);
			lindex++;
		}
	}
	cout << ans << "\n";
	return 0;
}
