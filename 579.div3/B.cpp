#include <bits/stdc++.h>

using namespace std;

int main(){
	int q,temp,temp1,temp2;
	int n;
	int rec,flag;
	int a,b,c,d;
	std::vector<int> ans;

	scanf("%d",&q);
	for(temp=1;temp<=q;temp++){
		scanf("%d",&n);
		std::vector<int> v;
		for(temp1=1;temp1<=4*n;temp1++){
			scanf("%d",&temp2);
			v.push_back(temp2);
		}
		sort(v.begin(),v.end());
		rec=v[0]*v[4*n-1];
		for(temp1=0,flag=0;temp1<2*n;temp1+=2){
			if(v[temp1]!=v[temp1+1] || v[4*n-1-temp1]!=v[4*n-2-temp1]){
				ans.push_back(0);
				flag=1;
				break;
			}
			a=v[temp1]*v[4*n-1-temp1];
			if(a!=rec){
				ans.push_back(0);
				flag=1;
				break;
			}
		}
		if(flag==0){
			ans.push_back(1);
		}
	}
	for(temp1=0;temp1<q;temp1++){
		if(ans[temp1]==1){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}