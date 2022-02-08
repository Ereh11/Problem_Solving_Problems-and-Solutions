#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std;
int main()
{
        { ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); } // to fast input and output.
        string s, v; cin >> s >> v;
        vector<int> count(26, 0); vector<bool>isext(26);
	int area = 0;
	for (int i = 0; i < s.size(); i++) count[s[i] - 97]++, isext[s[i] - 97] = 1;
	for (int i = 0; i < v.size(); i++)
	{
		if (!isext[v[i] - 97]) { cout << -1; return 0; }
		else
			if(count[v[i] - 97]) area++, count[v[i] - 97]--;
	}
	cout << area;
}