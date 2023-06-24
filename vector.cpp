#include <bits/stdc++.h>
using namespace std;

void basic(){
	vector<int> v;

	for (int i = 0; i < 5; ++i)
	{
		v.push_back(i);
	}
	for (int i = 0; i < 5; ++i)
	{
		cout << v[i] << endl;
	}
	cout << '\n';
	v.pop_back();
	v.pop_back();
	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << endl;
	}
}

void otherFunctions(){
	vector<int> v(50); // all element will be zero 0
	vector<int> v2(50,1); // all element will be 1
	vector<int> v3[10]; // array of 10 vector
	cout << v.size();
}

int main()
{
	otherFunctions();
}