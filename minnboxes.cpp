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
vector<int> minOperations(string boxes) {
	int N = boxes.length();
	int right[N];
	int left[N];
	vector<int> res;

	right[N - 1] = 0;
	left[0] = 0;

	int counter = 0;
	if(boxes[0] == '1') counter++;
	for(int i = 1; i < N; i++) {
		left[i] = counter + left[i - 1];
		if(boxes[i] == '1') counter++;
	}

	counter = 0;
	if(boxes[N - 1] == '1') counter++;
	for(int i = N - 2; i >= 0; i--) {
		right[i] = counter + right[i + 1];
		if(boxes[i] == '1') counter++;
	}

	for(int i = 0; i < N; i++) res.push_back(left[i] += right[i]);

	return res;
}

int main(){
	// setIO("file");


}