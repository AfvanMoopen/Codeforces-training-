/*
1325D - Ehab the Xorcist
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
	ll u, v;
	cin >> u >> v;
	if(!u && !v) {
		cout << 0;
		return 0;
	}
	if(u == v) {
		cout << "1\n" << u;
	}
	if(u & 1 ^ v & 1 || u > v) {
		cout << -1;
		return 0;
	}
	ll _and = (v - u) / 2;
	ll c = u+_and , d = _and;
	if((c ^ d) == u) {
		cout << "2\n" << c  << " " << d << "\n";
		return 0;
	} 
	cout << "3\n" << (v - u) / 2 << " " << (v-u)/2 << " " << u;
	
}

// (A ^ B)  = u
// (A & B) = v
// ---------------------------------------------------------
// A + B = (A XOR B) + 2 (A AND B) ==> (A ^ B) + 2(A & B)




