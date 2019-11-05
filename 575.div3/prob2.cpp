#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	int temp,temp1,temp2,q,n;
	int pos=1;
	int arr[200001];
	int answer[200001];
	int k[200001];
	int number[200001];
	int count;

	scanf("%d",&q);
	for(temp=1;temp<=q;temp++){
		scanf("%d %d",&n,&k[temp]);
		for(temp1=1,count=0;temp1<=n;temp1++){
			scanf("%d",&arr[temp1]);
			if(arr[temp1]%2==1){
				count++;
			}
		}
		if(count>=k[temp] && (k[temp]-count)%2==0){
			answer[temp]=1;
		}
		else{
			continue;
		}
		for(temp1=1;temp1<=n;temp1++){
			if(arr[temp1]%2==1){
				count--;
				if(count==0){
					number[pos]=n;
					pos++;
				}
				else if(count<k[temp]){
					number[pos]=temp1;
					pos++;
				}
			}
		}
	}
	for(pos=0,temp=1;temp<=q;temp++){
		if(answer[temp]==1){
			printf("YES\n");
			for(temp1=1;temp1<=k[temp];temp1++){
				printf("%d ",number[temp1+pos]);
			}
			printf("\n");
			pos+=temp1-1;
		}
		else{
			printf("NO\n");
		}
	}
}