#include <stdio.h>
#include <iostream>
#include <queue>
using namespace std;

int main(){
	int temp,temp1,temp2;
	int t,n;
	int building[150001][2];
	int visit[150001];
	int cur_x,cur_y,temp_x,temp_y;
	int dir[8][2]={{1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};
	int count=1;
	queue<int> x;
	queue<int> y;

	scanf("%d",&n);
	scanf("%d",&t);
	for(temp=1;temp<=n;temp++){
		scanf("%d %d",&building[temp][0],&building[temp][1]);
	}
	x.push(building[1][0]);
	y.push(building[1][1]);
	visit[1]=count++;
	while(!x.empty()){
		temp_x=x.front();
		temp_y=y.front();
		x.pop();
		y.pop();
		for(temp=0;temp<8;temp++){
			cur_x=temp_x+dir[temp][0];
			cur_y=temp_y+dir[temp][1];
			for(temp1=1;temp1<=n;temp1++){
				if(cur_x==building[temp1][0] && cur_y==building[temp1][1] && visit[temp1]==0){
					visit[temp1]=count++;
					x.push(cur_x);
					y.push(cur_y);
				}
			}
		}
	}
	for(temp=1;temp<=n;temp++){
		if(visit[temp]==0){
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
	for(temp=1;temp<=n;temp++){
		for(temp1=1;temp1<=n;temp1++){
			if(visit[temp1]==temp){
				printf("%d\n",temp1);
			}
		}
	}
	return 0;
}