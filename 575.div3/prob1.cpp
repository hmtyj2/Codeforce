#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	int temp,temp1,temp2,q;
	long long a,b,c,total;
	long long answer[10001];

	scanf("%d",&q);
	for(temp=1;temp<=q;temp++){
		scanf("%lld %lld %lld",&a,&b,&c);
		total=a+b+c;
		if(total%2==1){
			total-=1;
		}
		answer[temp]=total/2;
	} 
	for(temp=1;temp<=q;temp++){
		printf("%lld\n",answer[temp]);
	}
}