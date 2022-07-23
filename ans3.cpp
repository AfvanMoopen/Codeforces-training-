/*
C. Ehab and Path-etic MEXs

You are given a tree consisting of n nodes. You want to write some labels on the tree's edges such that the following conditions hold:

Every label is an integer between 0 and n−2 inclusive.
All the written labels are distinct.
The largest value among MEX(u,v) over all pairs of nodes (u,v) is as small as possible.
Here, MEX(u,v) denotes the smallest non-negative integer that isn't written on any edge on the unique simple path from node u to node v.
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
vector<int> adj[mxN];
int n , eu[mxN] , ev[mxN] , ans[mxN];


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for(int i = 1; i < n ; i++) {
		cin >> eu[i] >> ev[i] >> --eu[i]  , --ev[i];
		adj[eu[i]].push_back(i);
		adj[ev[i]].push_back(i);
	}
	for(int i = 0; i < n ; i++) {
		if(adj[i].size() < 2) 
			continue;
		memset(ans,-1, 4 * n);
		for(int j = 0; j < 3; j++) 
			ans[adj[i][j]] = j;
		for(int i = 1 , j = 3; i < n; i++) {
			if(ans[i] < 0) 
				ans[i] = j++;
			cout << ans[i] << "\n";
		}
		return 0;
	}
}




