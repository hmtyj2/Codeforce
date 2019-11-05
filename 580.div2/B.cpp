#include <bits/stdc++.h>

using namespace std;

int main(){
	int temp,temp1,temp2;
	long long m_count=0,p_count=0,z_count=0,count=0;
	int n;

	cin >> n;
	for(temp=0;temp<n;temp++){
		cin >> temp1;
		if(temp1<0){
			m_count+=-1-temp1;
			count++;
		}
		else if(temp1>0){
			p_count+=temp1-1;
		}
		else if(temp1==0){
			z_count++;
		}
	}
	if(count%2==0){
		cout << m_count+p_count+z_count;
	}
	else{
		if(z_count>0){
			cout << m_count+p_count+z_count;
		}
		else{
			cout << m_count+p_count+z_count+2;
		}
	}

}