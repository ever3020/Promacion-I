#include <iostream>

using namespace std;

int main(){
	
	int n1,n2,n3;
	
	cout<<"Digite 3 numeros: "; cin>>n1>>n2>>n3;
	
	if (n1==n2==n3){
	  cout<<"Los tres numeros son iguales"<<endl;
	}
	else if(n1>n2 && n1>n3){
		cout<<"El numero mayor es: "<<n1;
	}
	 else if(n2>n1 && n2>n3){
		cout<<"El numero mayor es: "<<n2;
	}
	 else if(n3>n2 && n3>n1){
		cout<<"El numero mayor es: "<<n3;
	}

	return 0;
	
}
