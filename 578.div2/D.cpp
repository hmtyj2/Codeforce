#include <bits/stdc++.h>

using namespace std;

char amap[2001][2001];

int find(int row, int col, int k,int n){
	int temp,temp1;
	int count=0;

	for(temp=1;temp<=n;temp++){
		for(temp1=1;temp1<=n;temp1++){
			if(amap[temp][temp1]=='B'){
				if(temp>=row && temp<=row+k-1 && temp1>=col && temp1<=col+k-1){
				}
				else{
					break;
				}
			}
			if(temp1==n){
				count++;
			}
		}
	}
	for(temp=1;temp<=n;temp++){
		for(temp1=1;temp1<=n;temp1++){
			if(amap[temp1][temp]=='B'){
				if(temp1>=row && temp1<=row+k-1 && temp>=col && temp<=col+k-1){
				}
				else{
					break;
				}
			}
			if(temp1==n){
				count++;
			}
		}
	}
	return count;
}

int main(){
	int temp,temp1,temp2,temp3;
	int n,k;
	char gar;
	int count=0;
	int maxi=0;

	scanf("%d %d",&n,&k);
	for(temp=1;temp<=n;temp++){
		scanf("%c",&gar);
		for(temp1=1;temp1<=n;temp1++){
			scanf("%c",&amap[temp][temp1]);
		}
	}
	maxi=find(1,1,k,n);
	for(temp=1;temp<=n-k+1;temp++){
		for(temp1=1;temp1<=n-k+1;temp1++){
			count=find(temp,temp1,k,n);
			if(count>maxi){
				maxi=count;
			}
		}
	}
	printf("%d\n",maxi);
}