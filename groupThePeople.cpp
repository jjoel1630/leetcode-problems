#include <vector>
#include <string>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
using ll = long long;
using vi = vector<int>;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
using pi = pair<int,int>;
#define f first
#define s second
#define mp make_pair
//Global Variables:
void setIO(string name = "") { // name is nonempty for USACO file I/O
	ios_base::sync_with_stdio(0); cin.tie(0); // see Fast Input & Output
	if(sz(name)){
		freopen((name+".in").c_str(), "r", stdin); // see Input & Output
		freopen((name+".out").c_str(), "w", stdout);
	}
}

vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
	map<int, vector<int>> m;
	int N = groupSizes.size();

	for(int i = 0; i < N; i++) {
		// m[groupSizes[i]][0] += 1;
		m[groupSizes[i]].push_back(i);
	}

	vector<vector<int>> v;
	for(auto &p : m) {
		int t = p.second.size();
		int count = 0;
		for(int j = 1; j < t; j++) {
			if(count == p.first) {
				count = 0;
				v.push_back({p.second[j]});
			} else v[v.size() - 1].push_back(p.second[j]);
		}
	}

	return v;
}

int main(){
	// setIO("file");
}