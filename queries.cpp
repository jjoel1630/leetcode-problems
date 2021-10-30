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

vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
	vector<int> res;

	int n = points.size();
	for(int i = 0; i < queries.size(); i++) {
		int count = 0;
		for(int j = 0; j < n; j++) {
			int x = (points[j][0] - queries[j][0]) * (points[j][0] - queries[i][0]);
			int y = (points[j][1] - queries[j][1]) * (points[j][1] - queries[i][1]);;
			int r = queries[i][2] * queries[i][2];

			if(x + y >= r) count++;
		}

		res.push_back(count);
	}

	return res;
}

int main(){
	// setIO("file");


}