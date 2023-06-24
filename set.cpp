#include <bits/stdc++.h>
using namespace std;

void testSet(set<int> s){
	cout << s.count(1); //check for appernce 

	cout << s.size();

	s.erase(1);

	cout << s.count(1); 

	s.insert(1);

	cout << s.count(1);
}

int main()
{
	set<int> s;

	s.insert(1);
	s.insert(2);
	s.insert(3);
}