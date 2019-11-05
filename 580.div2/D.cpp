#include <bits/stdc++.h>

using namespace std;

int mini=1000000000;
long long arr[100001];
int visit[100001]={0,};
int n;
int lcount=1;

void dfs(int now, int formal){
	int temp;
	visit[now]=lcount;
	if(mini==3){
		return;
	}
	for(temp=1;temp<=n;temp++){
		if(arr[temp]&arr[now]){
			if(visit[temp]==0){
				lcount++;
				dfs(temp,now);
			}
			else{
				if(temp!=formal && temp!=now){
					if(visit[now]>visit[temp] && visit[now]-visit[temp]+1<mini){
						mini=visit[now]-visit[temp]+1;
					}
				}
			}
		}
	}
}

int main(){
	int temp,temp1,temp2;

	scanf("%d",&n);
	for(temp=1;temp<=n;temp++){
		scanf("%lld",&arr[temp]);
	}
	for(temp=1;temp<=n;temp++){
		if(visit[temp]==0){
			dfs(temp,temp);
			if(mini==3){
				break;
			}
		}
	}
	if(mini!=1000000000){
		cout << mini;
	}
	else{
		cout << "-1";
	}

}