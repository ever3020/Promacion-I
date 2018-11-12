#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int numero;
	
	do{
		cout<<"Ingrese un numero: "; cin>>numero;
	}while((numero<1)&&(numero>10));
	
	for(int i=1;i<=10;i++){
		cout<<numero<<"*"<<i<<"="<<numero*i<<endl;
	}
	cout<<"\n\n";
	system("pause");
return 0;
}
