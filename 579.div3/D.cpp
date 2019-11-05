#include <bits/stdc++.h>

using namespace std;

string s;
string t;
int s_size,t_size;
int maxi=0;

void dfs(int s_index, int t_index, int rmv, int rmv_maxi){
	if(rmv_maxi<rmv){
		rmv_maxi=rmv;
	}
	if(s_index==s_size && t_index!=t_size){
		return;
	}
	else if(s_index==s_size && t_index==t_size){
		if(rmv_maxi>maxi){
			maxi=rmv_maxi;
		}
		return;
	}
	if(t_index==t_size){
		dfs(s_index+1,t_index,rmv+1,rmv_maxi);
		return;
	}
	if(s[s_index]!=t[t_index]){
		dfs(s_index+1,t_index,rmv+1,rmv_maxi);
	}
	else{
		dfs(s_index+1,t_index,rmv+1,rmv_maxi);
		dfs(s_index+1,t_index+1,0,rmv_maxi);
	}
}

int main(){
	int temp,temp1,temp2;

	cin >> s >> t;
	s_size=s.size();
	t_size=t.size();
	
	dfs(0,0,0,0);
	printf("%d\n",maxi);
}