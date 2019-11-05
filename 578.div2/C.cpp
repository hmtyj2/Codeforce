#include <bits/stdc++.h>

using namespace std;
std::vector<int> answer;

long long f_gcd(long long a,long long b){
	while(b!=0){
		long long r=a%b;
		a=b;
		b=r;
	}
	return a;
}

int main(){
	int q,temp,temp1,temp2;
	long long n,m,gcd;
	long long s_x,e_x;
	long long s_y,e_y;
	long long s_z,e_z;

	cin >> n >> m >> q;
	gcd=f_gcd(n,m);
	for(temp=0;temp<q;temp++){
		cin >> s_x >> s_y >> e_x >> e_y;
		if(s_x==1){
			s_x=n;
		}
		else{
			s_x=m;
		}
		if(e_x==1){
			e_x=n;
		}
		else{
			e_x=m;
		}

		s_z=(s_y-1)/(s_x/gcd);
		e_z=(e_y-1)/(e_x/gcd);
		if(s_z==e_z){
			answer.push_back(1);
		}
		else{
			answer.push_back(0);
		}
	}
	for(temp=0;temp<q;temp++){
		if(answer[temp]==1){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}

}