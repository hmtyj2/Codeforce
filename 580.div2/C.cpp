#include <bits/stdc++.h>

using namespace std;

int main(){
	int temp,temp1,temp2;
	int n;
	int index;
	int arr[200000];
	long long maxi=0,mini=10000000000000,sum=0;

	cin >> n;
	if(n%2==1){
		for(temp=1,index=0;temp<=2*n;temp++){
			arr[index]=temp;
			if(index%2==0){
				index=(index+n)%(2*n);
			}
			else{
				index++;
			}
		}
	}
	else{
		printf("NO\n");
		return 0;
	}
	printf("YES\n");
	for(temp=0;temp<2*n;temp++){
		printf("%d ",arr[temp]);
	}
}