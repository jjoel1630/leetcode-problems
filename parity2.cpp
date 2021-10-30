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
vector<int> sortArrayByParityII(vector<int>& nums) {
	vector<int> v(nums.size());
	int odd = 1, even = 0;

	for(int i = 0; i < nums.size(); i++) {
		if(nums[i] % 2 == 0) {
			v[even] = nums[i];
			even += 2;
		} else {
			v[odd] = nums[i];
			odd += 2;
		}
	}

	return v;
}

int main(){
	// setIO("file");

	vi v{4,2,5,7};
	vi x = sortArrayByParityII(v);

	// for(int i = 0; i < x.size(); i++) {
	// 	cout << x[i] << " ";
	// }
}