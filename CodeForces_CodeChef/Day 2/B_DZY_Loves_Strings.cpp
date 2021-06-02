#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;	cin>>s;

	int k;	cin>>k;

	vector<int> v(26);

	for(auto &x : v)cin>>x;

	int f = 0 ;

	for(int i=0;i<s.length();i++){
		 f+=v[s[i] - 'a']*(i+1);
	}

	int maxvalue = INT_MIN;
	int idx = -1;

	for(int i=0;i<v.size();i++){
		if(v[i] >= maxvalue){
			idx = i;
			maxvalue = v[i]; 
		}
	}
	int x= s.length();
	for(int i = x+1; i<=x+k;i++){
		f += v[idx]*(i);
	}
	cout<<f<<endl;
}