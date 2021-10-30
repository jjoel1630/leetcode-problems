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
#ifdef DEBUG
#include "lib/debug.h"
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
#define debug_arr(...) \
  cerr << "[" << #__VA_ARGS__ << "]:", debug_arr(__VA_ARGS__)
#pragma GCC diagnostic ignored "-Wsign-compare"
//#pragma GCC diagnostic ignored "-Wunused-parameter"
//#pragma GCC diagnostic ignored "-Wunused-variable"
#else
#define debug(...) 42
#endif
//Global Variables:
void setIO(string name = "") { // name is nonempty for USACO file I/O
	ios_base::sync_with_stdio(0); cin.tie(0); // see Fast Input & Output
	if(sz(name)){
		freopen((name+".in").c_str(), "r", stdin); // see Input & Output
		freopen((name+".out").c_str(), "w", stdout);
	}
}

int numUniqueEmails(vector<string>& emails) {
	map<string, int> m;
	for(int i = 0; i < emails.size(); i++) {
		string s = "";
		bool plus = false;
		int b;
		for(int j = 0; j < emails[i].length(); j++) {
			if(emails[i][j] == '@') {
				s += "@";
				b = j;
				break;
			}
			else if(emails[i][j] == '+') plus = true;
			else if(plus) continue;
			else if(emails[i][j] == '.') continue;
			else s += emails[i][j];
		}
		for(int j = b + 1; j < emails[i].length(); j++) s += emails[i][j];
		
		m[s]++;
	}
	
	return m.size();
}
int main(){
	// setIO("file");

	vector<string> v{"test.email+alex@leetcode.com","test.e.mail+bob.cathy@leetcode.com","testemail+david@lee.tcode.com"};
	cout << numUniqueEmails(v);
}