/*
E - Ehab Real Numbeer theory Problem 

*/

#include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()
#define fast ios::sync_with_stdio(false);cin.tie(0);
typedef long long ll;
typedef long double ld;
#define ll long long 
#define ar array 
typedef unsigned long long ull;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
const int mxN = 1e6;
int n , ans = 1e9;
bool vis[mxN+1];
vector<int> adj[mxN+1];

void dfs(int u, int p = -1) {
	if(~p){
		adj[u].erase(find(adj[u].begin() , adj[u],end() , p));
		d[u] = d[p]+1;

	}
	vis[u] = 1;
	for(int v : adj[u]) {
		if(vis[v]){
			if(dp[u] <= dp[v])
				ans = min(d[u] - d[v]+1 , ans);
		}
		else
			dfs(v, u);
	}
}


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n; 
	for(int i = 0 , a ; i < n; i++) {
		cin >> a;
		vector<ar<int, 2>> pf;
		for(int j = 2; j * j <= a; ++j) {
			if(a%j)
				continue;
			pf.push_back((j, 0));
			while(a % j == 0) {
				pf.back()[1]++;
				a /= j;
			}
		}
		if(a > 1)
			pf.push_back((a, 1));
		for(int i = (int)pf.size()-1; ~i; --i) {
			if(pf[i][1] % 2 == 0)
				pf.erase(pf.begin()+i);
		}
		while(pf.size() < 2)
			pf.push_back((1, 0));
		adj[pf[0][0]].push_back(pf[1][0]);
		adj[pf[1][0]].push_back(pf[0][0]);
	}
	for(int i = 1; i <= mxN; ++i)
		if(!vis[i])
			dfs(i);
		cout << (ans < 1e9 ? ans : -1);
}





