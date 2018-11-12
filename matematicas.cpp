#include <iostream>

using namespace std;

int main(){
	
	float a,b,c,d,resultado=0;
	
	cout<<"ingrse el valor de a: ";cin>>a;
	cout<<"ingrse el valor de b: ";cin>>b;
	cout<<"ingrse el valor de c: ";cin>>c;
	cout<<"ingrse el valor de d: ";cin>>d;
	
	resultado=(a+(b/c-d));
	cout.precision(2);
	cout<<"el valor es: "<<resultado;
	
	return 0;
}
