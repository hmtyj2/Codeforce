#include <bits/stdc++.h>

using namespace std;

int main(){
	int t,n,m,k;
	int temp,temp1,temp2;
	int pos;
	std::vector<int> answer;

	scanf("%d",&t);
	for(temp=0;temp<t;temp++){
		scanf("%d %d %d",&n,&m,&k);
		std::vector<int> v;
		for(temp1=0;temp1<n;temp1++){
			scanf("%d",&temp2);
			v.push_back(temp2);
		}
		for(pos=0;pos<=n-1;pos++){
			if(pos==n-1){
				answer.push_back(1);
				break;
			}
			if(v[pos]-v[pos+1]>-k){
				if(v[pos+1]-k>=0){
					m+=v[pos]-v[pos+1]+k;
				}
				else{
					m+=v[pos];
				}
			}
			else if(v[pos]-v[pos+1]<-k){
				m-=v[pos+1]-v[pos]-k;
			}
			if(m<0){
				answer.push_back(0);
				break;
			}
		}
	}
	for(temp=0;temp<t;temp++){
		if(answer[temp]==0){
			printf("NO\n");
		}
		else if(answer[temp]==1){
			printf("YES\n");
		}
	}
}