#include <bits/stdc++.h>

using namespace std;

int main(){
	int temp,temp1,temp2;
	int n,m;
	int sum,total=0;
	int flag=0;
	int a[100];
	int b[100];

	cin >> n;
	for(temp=0;temp<n;temp++){
		cin >> a[temp];
	}
	cin >> m;
	for(temp=0;temp<m;temp++){
		cin >> b[temp];
	}
	for(temp=0;temp<n;temp++){
		for(temp1=0;temp1<m;temp1++){
			flag=0;
			sum=a[temp]+b[temp1];
			for(temp2=0;temp2<n;temp2++){
				if(sum==a[temp2]){
					flag=1;
					break;
				}
			}
			if(flag!=1){
				for(temp2=0;temp2<m;temp2++){
					if(sum==b[temp2]){
						flag=1;
						break;
					}
				}
			}
			if(flag==0){
				printf("%d %d\n",a[temp],b[temp1]);
				return 0;
			}
		}
	}
}