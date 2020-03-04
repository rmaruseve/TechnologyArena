#include <iostream>
#include <string>
using namespace std;

int main(){
	
	string user;
	int ascChar,ph;
	char c;
	getline (cin, user);
	
	for(int i=0;i<user.length();i++){
		ascChar = user[i];
		if(ascChar == 32){
			cout<<user[i];
		}
	
		else{
			ascChar+=12;
			if(ascChar>=123){
				ph = ascChar;
				ascChar=97 + (ph-123);
			}
			char c = (char)ascChar;
			cout<<c;
		}
	}
	
	return 0;
}
