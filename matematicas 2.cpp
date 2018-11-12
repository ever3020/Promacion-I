#include <iostream>

#include <math.h>

using namespace std;

int main(){
	
	float a,b,c,resultado1=0,resultado2=0;
	
	cout<<"ingrese el valor de a: "; cin>>a;
	cout<<"ingrese el valor de b: "; cin>>b;
	cout<<"ingrese el valor de c: "; cin>>c;
	
	//resultado de +b
	resultado1= (-b+sqrt(pow(b,2)-4*a*c))/2*a;
	
	//resultado de -b
	resultado2= (-b-sqrt(pow(b,2)-4*a*c))/2*a;
	
	cout<<"/nel resultado de +b es: "<<resultado1<<endl;
	cout<<"el resultado de -b es: "<<resultado2;
	
	return 0;
}
