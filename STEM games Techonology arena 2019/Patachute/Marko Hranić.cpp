#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;

const float pi=3.141592653;

float povrsina (float a){
	float povrsina = pow(a,2) * pi; 
	return povrsina;
}

int main(){
	
	float bigR,smallR,av,p,sum,c,rezultat;
	int brojOtoka;
	
	cin>>bigR>>brojOtoka;
	p = povrsina(bigR);
	for(int i =0;i<brojOtoka;i++){
		
		cin>>smallR;
		c=povrsina(smallR);
		sum+=c;
	}
	
	printf("%.2f",1-(sum/p)); // ayy lmao
					
	
}
