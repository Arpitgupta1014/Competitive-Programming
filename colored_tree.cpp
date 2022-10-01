#include <bits/stdc++.h>
using namespace std;
const int MAXN = 100005;
vector <int> G[MAXN], col_list[MAXN];
int col[MAXN], ans[MAXN];
void dfs(int pos)
{
	if(col_list[col[pos]].empty())
		ans[pos] = -1;
	else
		ans[pos] = col_list[col[pos]].back();
	col_list[col[pos]].push_back(pos);
	for (int i = 0; i < G[pos].size(); ++i)
	{
		dfs(G[pos][i]);
	}
	col_list[col[pos]].pop_back();
}
int main()
{
	int n,c;
	cin>>n>>c;
	for (int i = 2; i <= n; ++i)
	{
		int par;
		cin>>par;
		G[par].push_back(i);
	}
	for (int i = 1; i <= n; ++i)
	{
		cin>>col[i];
	}
	dfs(1);
	for (int i = 1; i <= n; ++i)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
}