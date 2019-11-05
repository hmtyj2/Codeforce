#include <bits/stdc++.h>

using namespace std;
std::vector<long long> v;
long long arr[400000];
int main(){
	long long n,temp,temp1;
	long long mini,index;
	long long a,b,c;

	scanf("%lld",&n);
	for(temp=0,index=0;temp<n;temp++){
		scanf("%lld",&a);
		if(temp==0){
		}
		else{
			while(b!=0){
				c=a%b;
				a=b;
				b=c;
			}
		}
		b=a;
		if(temp==n-1){
			for(temp1=1;temp1*temp1<=b;temp1++){
				if(b%temp1==0 && temp1*temp1!=b){
					index+=2;
				}
				else if(b%temp1==0 && temp1*temp1==b){
					index++;
				}
			}
		}
	}
	printf("%lld\n",index);
}