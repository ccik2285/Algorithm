#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	//freopen("input.txt", "rt", stdin);
	int n, len=INT_MAX;
	string str;
	cin>>n;
	vector<string> words;
	for(int i=0; i<n; i++){
		cin>>str;
		words.push_back(str);
		len=min(len, int(str.size()));
	}
	string res="";
	for(int i=0; i<len; i++){
		string tmp="";
		for(auto &s : words) tmp+=s[i];
		int m=count(tmp.begin(), tmp.end(), tmp[0]);
		if(m==n) res+=tmp[0];
		else break;
	}
	cout<<res;
	return 0;
}
