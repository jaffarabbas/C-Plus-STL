#include <bits/stdc++.h>
using namespace std;

void cf(){
	map<string,int> freq;
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		string s;
		cin >> s;
		if(freq[s] == 0){
			cout << "OK" << "\n";
		}else{
			cout << s << freq[s] << "\n";
		}
		freq[s]++;
	}
}

int main()
{
	map<int ,int> m;

	m[1] = 1;
	m[2] = 1;
	m[3] = 1;

	for(pair<int,int> x:m){
		cout << x.first;
	}
}