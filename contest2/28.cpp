#include <bits/stdc++.h>
 
using namespace std;
 
int n, res;
int a[103], b[103], sum;
bool ok;
 
void back_track(int u = 1, int k = 1)
{
	if(sum > res) return;
	if(sum == res)
	{
		ok = false;
		cout << '[';
		for (int i = 1; i < k; i++)
		{
			cout << b[i] << ' ';
		}
		cout << ']' << ' ';
		return;
	}
	for(int i = u; i <= n; ++i)
	{
		sum += a[i];
		b[k] = a[i];
		back_track(i, k + 1);
		sum -= a[i];
	}
}
 
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		ok = true;
		cin >> n >> res;
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i];
		}
		back_track();
		if(ok) cout << -1;
		cout << '\n';
	}
	return 0;
}
