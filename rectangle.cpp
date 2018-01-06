//january long challenge
//question 1

#include<bits/stdc++.h>
#define lli long long int 
using namespace std;


int main(){
	int t=0;
	cin>>t;
	while(t--){
		lli arr[4];
	for(int i=0;i<4;i++)
	cin>>arr[i];
	sort(arr,arr+4);
	if(arr[0]==arr[1]&&arr[2]==arr[3])
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	}
	return 0;
}
