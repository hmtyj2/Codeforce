#include <bits/stdc++.h>

using namespace std;

int main(){
	int q,temp,temp1;
	int n,flag;
	int arr[200];
	std::vector<int> ans;

	scanf("%d",&q);
	for(temp=1;temp<=q;temp++){
		flag=0;
		scanf("%d",&n);
		for(temp1=0;temp1<n;temp1++){
			scanf("%d",&arr[temp1]);
		}
		if(n==1){
			ans.push_back(1);
			continue;
		}
		if(arr[0]==arr[1]+1 || (arr[0]==1 && arr[1]==n)){
			for(temp1=0;temp1<n-1;temp1++){
				if(arr[temp1]==arr[temp1+1]+1 || (arr[temp1]==1 && arr[temp1+1]==n)){

				}
				else{
					flag=1;
					break;
				}
			}
		}
		else if(arr[0]==arr[1]-1 || (arr[0]==n && arr[1]==1)){
			for(temp1=0;temp1<n-1;temp1++){
				if(arr[temp1]==arr[temp1+1]-1 || (arr[temp1]==n && arr[temp1+1]==1)){
					
				}
				else{
					flag=1;
					break;
				}
			}
		}
		if(flag==0){
			ans.push_back(1);
		}
		else{
			ans.push_back(0);
		}
	}
	for(temp=0;temp<q;temp++){
		if(ans[temp]==1){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}

}