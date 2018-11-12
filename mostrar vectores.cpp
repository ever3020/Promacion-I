#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int vector[100];
	int n;
	
		cout<<"escriba cuantos numeros quiere mostrar: ";
		cin>>n;
	
	for (int i=0;i<n;i++){
		cout<<"escribe un numero: ";
		cin>>vector[i];
	}
	
	for (int i=0;i<n;i++){
		cout<<i<<"->"<<vector[i]<<endl;
	}

	getch();
	return 0;
}
