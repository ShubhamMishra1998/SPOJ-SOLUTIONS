#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t;
	cin >> t;
	while (t--)
	{
		string s1, s2;
		cin >> s1 >> s2;
		reverse(s1.begin(), s1.end());
		reverse(s2.begin(), s2.end());
		ll a = stoi(s1);
		ll b = stoi(s2);
		ll c = (a + b);
		s1 = to_string(c);
		reverse(s1.begin(), s1.end());
		ll i = 0;
		while (s1[i] == '0')
			i++;
		for (ll j = i; j < s1.size(); j++)
			cout << s1[j];
		cout << '\n';
	}
} 
