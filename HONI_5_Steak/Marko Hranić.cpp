#include <iostream>
#include <cstring>
using namespace std;

int main(){
	
	string m;
	int d,n;
	
	cin>>n;
	
	for(int i=0;i<n;i++){
		
		cin>>d;
		cin>>m;
		
		if(d%2==0) cout<< "BROKULA"<<endl;
		if(d%2!=0) cout<< "MRKVA"<<endl;
		
	}
	return 1;
}
