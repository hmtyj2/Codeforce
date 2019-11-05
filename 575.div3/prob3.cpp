#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	int temp,temp1,temp2,q;
	int n,temp_n;
	int robot[100001][6];
	int index;
	int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
	int x[200001];
	int y[200001];
	int answer[100001];

	scanf("%d",&q);
	for(temp=1;temp<=q;temp++){
		scanf("%d",&n);
		for(temp1=1;temp1<=n;temp1++){
			for(temp2=0;temp2<6;temp2++){
				scanf("%d",robot[temp1+index]+temp2);
			}
		}
		index+=n;
		for(temp1=index-n+1;temp1<=index;temp1++){
			if(robot[temp1][3]==1){
				for(temp2=0;temp2++)
			}
		}
	}
}