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

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int x;
		cin >> x;
		cout << 1 << " " << x - 1 << "\n";

	}
}


//GCD(A, B) + LCM(a, b) = x
1, x-1  = GCD(1, x - 1) + LCM(1, x - 1) => x

