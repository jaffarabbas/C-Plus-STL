#include <bits/stdc++.h>
using namespace std;

int main()
{
	pair<int,string> p = {2,"jaffar"};
	vector<pair<int,string>> v = {
		{2,"jaffar2"},
		{1,"jaffar"},
	};

	cout << v[0].second;

	sort(v.begin(),v.end());

	cout << v[0].second;
}