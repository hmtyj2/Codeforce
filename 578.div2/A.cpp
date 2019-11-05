#include <bits/stdc++.h>

using namespace std;

int main(){
	int N;
	int temp,temp1,temp2;
	int hotel[10]={0,};
	string s;

	cin >> N;
	cin >> s;
	for(temp=0;temp<N;temp++){
		if(s[temp]=='L'){
			for(temp1=0;temp1<10;temp1++){
				if(hotel[temp1]==0){
					hotel[temp1]=1;
					break;
				}
			}
		}
		else if(s[temp]=='R'){
			for(temp1=9;temp1>=0;temp1--){
				if(hotel[temp1]==0){
					hotel[temp1]=1;
					break;
				}
			}
		}
		else{
			hotel[s[temp]-48]=0;
		}
	}
	for(temp=0;temp<10;temp++){
		printf("%d",hotel[temp]);
	}
}