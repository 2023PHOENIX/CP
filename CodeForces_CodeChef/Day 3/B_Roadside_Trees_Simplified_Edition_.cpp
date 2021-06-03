#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;	cin>>n;
	vector<int> v(n);

	for(int &x : v)cin>>x;

	int time = 0;
	for(int i=1;i<n;i++){
		if(v[i-1] > v[i]){
			time += v[i-1] -v[i];
		}
		else{
			time +=v[i] - v[i-1];
		}
		time++;
	}

	cout<<time+v[0] +n<<endl;
}