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
int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
	int N = grid[0].size();
	vector<int> row(N), col(N);

	for(int i = 0; i < N; i++) {
		int maxc = -1;
		int maxr = -1;
		for(int j = 0; j < N; j++) {
			row[i] = max(row[i], grid[i][j]);
			col[j] = max(col[j], grid[i][j]);		
		}
	}

	int count = 0;
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			count += min(row[i], col[j]) - grid[i][j];
		}
	}

	return count;
}

int main(){
	// setIO("file");
}