/*
F - Ehab's Last Theorem 
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
const int mxN = 1e5;
vector<int> adj[mxN] , ord;
bool vis[mxN] , bad[mxN];
int n, m , sq, d[mxN] , par[mxN];

void ans2(int u, int v) {
	cout << "2\n" << d[u]-d[v]+1 << "\n";
	while(1) {
		cout << u+1 << " ";
		if(u == v)
			break;
		u = par[u];
	}
	exit(0);
}
void dfs(int u = 0 , int p = -1) {
	if(~p) {
		adj[u].erase(find(adj[u].begin() , adj[u],end() , p));
		d[u] = d[p] + 1;

	}
	par[u] = p;
	vis[u] = 1;
	for(int v : adj[u]) {
		if(vis[u]) {
			if(d[u] > d[v]&&d[u]-d[v]+1>=sq) {
				ans2(u, v);
			}
		}else 
		{
			dfs(v, u);
		}
		ord.push_back(u);
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	while(sq * sq < n) 
		++sq;
	for(int i = 0 , u, v; i < m; i++) {
		cin >> u >> v , --u, --v;
		adj[u].push_back(v);
		adj[v].push_back(u);

	}
	dfs();
	cout << "1\n";
	for(int i = 0 , j = 0; j < sq; ++i) {
		if(bad[ord[i]])
			continue;
		cout << ord[i] + 1 << " ";
		for(int k : adj[ord[i]])
			bad[k] = 1;
		if(~par[ord[i]])
			bad[par[ord[i]]] = 1;
		++j;

	}
}

// (A ^ B)  = u
// (A & B) = v
// ---------------------------------------------------------
// A + B = (A XOR B) + 2 (A AND B) ==> (A ^ B) + 2(A & B)




