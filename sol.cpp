#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<int> v(n);
		for(auto &it : v) 
			cin >> it;
		sort(v.begin(), v.end());
		if(v.front() == v.back())
			cout << n;
		else 
			cout << 1;
		cout << "\n";
	}
}
