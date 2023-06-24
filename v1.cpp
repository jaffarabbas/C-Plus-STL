#include <bits/stdc++.h>
using namespace std;

void test(vector<int> v){
	vector<int> v1;
	vector<int> v2;

	for (int i = 0; i < v.size(); ++i)
	{
		if(v[i] %2 == 0){
			v1.push_back(v[i]);
		}else{
			v2.push_back(v[i]);
		}
	}

	for (int i = 0; i < v1.size(); ++i)
	{
		cout << v1[i];
	}
	cout << "\n";
	for (int i = 0; i < v2.size(); ++i)
	{
		cout << v2[i];
	}
}

int main()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	test(v);
}