#include<bits/stdc++.h>
using namespace std;

#define debug(x){cout<<"x : "<<x<<endl;}


class Solution {
public:

	bool isOperend(char x) {
		if (x == '+' || x == '-' || x == '*' || x == '/') return false;
		else return true;
	}

	int pre(char x) {
		if (x == '+' || x == '-')return 1;
		else if (x == '*' || x == '/') return 2;
		else return 0;

	}

	string convert(string s) {
		int n = s.length();
		string ans = "";
		stack<char> st;
		for (int i = 0; i < n; i++) {
			if (isOperend(s[i])) {
				st.push(s[i]);
				ans += st.top();

			}
			else {
				if (st.empty())st.push(s[i]);
				else if (!isOperend(s[i])) {

					if (pre(s[i]) < pre(st.top())) {
						ans += st.top();
						st.pop();
					}
					else {
						st.push(s[i]);
					}
				}
			}
		}
		cout << ans;
		return ans;
	}

};


int main() {
#ifndef ONLINE_JUDGE
	//for getting input from input.txt
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s = "a+b*c-d/e";

	Solution obj;
	obj.convert(s);

}
