#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std;
int main()
{
    { ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); } // to fast input and output.
      string s; cin >> s;
	int co_7 = 0, co_4 = 0;
	for (int i = 0; i < s.size(); i++)
		if (s[i] == '4') co_4++;
	        else if(s[i]=='7') co_7++;
	if (!co_4 && !co_7) cout << -1;
	else if(co_4 >= co_7) cout << 4;
	else cout << 7;
}