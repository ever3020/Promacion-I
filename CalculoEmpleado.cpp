/*
Este programa fue hecho por: Ever Gonzalez.
carnet: AG18012
a�o: 1
*/

//Librerias o directorios utilizados.
#include <cstdlib>
#include <iostream>
#include <windows.h>

//declaraciones globales

using namespace std;

// estructuras a utilizar
struct Empleado{ 
	char cod[5];
	char nombre[50];
	int edad;
	float salbase;
	float salliquido;
	float isss;
	float afp;
	float renta;
	float totalprestamo;
	char departamento[60];
	char puesto[60] ;
};  
	struct Sucursal{ 
	int numsucursal;
	char nombresucursal[60];
};

//funciones y prototipo de funciones

float calisss(float sal,float tope) //Funcion para calcular el isss	
		{
		int isss=0; 
		if(sal>=1000)
		isss=30;
		else
		isss=sal*0.03; 
		return isss;
		}
float calafp(float sal,float isss) //Funcion para calcular el afp
{
		float afp; 
		afp=sal*0.0725;
		return afp;
}
float calrenta(float sal,float isss,float afp)//Funcion para calcular la renta
	{
		float renta; 
		float calc;
		if (sal<=472) 
	{
		renta=0;
	}     else if(sal<=895.25)

	{
		calc=(sal-isss-afp)-472;
		renta=(calc*0.10)+17.67;
		return renta;
	}     else if(sal<=2038.10)
	{
		calc=(sal-isss-afp)-895.25;
		renta=(calc*0.2)+60;
			return renta;
	} 			else 
				{
	calc=(sal-isss-afp)-2038.10;
	renta= (calc*0.3)+288.57;
	return renta;
	}
}
void cler(){ //funcion de limpiar pantalla
	system("cls");
}

//inicia bloque main

int main(int argc, char *argv[])
{ 	system ("color 4D"); //Color del programa
	int n;
	system("pause");
	cler();
	cout << "�Cuantos empleados tiene?"<<endl;
	while(!(cin>>n)){		 			
		cout<<"Error"<<endl;
		cin.clear();
		cin.ignore(22,'\n');					
		};

//implementacion de funciones

cler();
	Empleado e[n];
	Sucursal s;
	int cp;
	int contador;
	for(int i=0; i<n;i++)   		
				{	
		cout<<"Datos de empleado "<<i+1<<endl;
		cout << "Cod:"<<"\t"<<"\t";
		cin>>e[i].cod;
		cout << "Nombre:"<<"\t"<<"\t";
		cin>>e[i].nombre;
		cout << "Edad:"<<"\t"<<"\t";
		cin>>e[i].edad; 
		cout << "Salbase:"<<"\t"; 
		while(!(cin>>e[i].salbase)){ 					
			cout<<"Error"<<endl;
			cin.clear();
			cin.ignore(22,'\n');
							};
		e[i].isss=calisss(e[i].salbase,0.03);					//llamado a funcion isss
		e[i].afp=calafp(e[i].salbase, e[i].isss);				//llamado de la funcion afp
		e[i].renta=calrenta(e[i].salbase, e[i].isss, e[i].afp); //llamada de la funcion renta
		cout << "Cantidad de prestamos:";
		while(!(cin>>cp)){ 									//Validacion de tipo de dato
		cout<<"Error: Intente de nuevo..."<<endl;
		cin.clear();
		cin.ignore(22,'\n');
	    				};
		contador=0;					
		float totpres=0;
		float pres;				
		while(contador<cp)
	    				{
		cout << "total descuento:"<<"\t"<<"\t";
		cin>>pres;
		if(e[i].salbase*0.8>(totpres+pres))
					{
		   	totpres=totpres+pres;
			e[i].totalprestamo=totpres;
										}
			contador++;
						}
		cout << "Departamento:"<<"\t";
		cin>>e[i].departamento; 
		cout << "Puesto:"<<"\t"<<"\t";
		cin>>e[i].puesto; 
		cler();	
					}	
		cout <<"Codigo	"<<"|"<<"\t";
		cout <<"Nombre	"<<"|"<<"\t";
		cout <<"Edad	"<<"|"<<"\t";
		cout <<"Salario	"<<"|"<<"\t";
		cout <<"Isss	"<<"|"<<"\t";
		cout <<"Afp	"<<"|"<<"\t";
		cout <<"Renta	"<<"|"<<"\t";
		cout <<"Prestamos"<<"|"<<"\t";
		cout <<"Departamento"<<"|"<<"\t";
		cout <<"Puesto	"<<"|"<<"\t";
		cout<<endl;
			for(int i=0; i<n;i++) 				//salida de datos
			{
		cout <<e[i].cod<<"	"<<"|"<<"\t";
		cout <<e[i].nombre<<"	"<<"|"<<"\t";
		cout<<e[i].edad<<"	"<<"|"<<"\t";
		cout<<e[i].salbase<<"	"<<"|"<<"\t";
		cout<<e[i].isss<<"	"<<"|"<<"\t";
		cout<<e[i].afp<<"	"<<"|"<<"\t";
		cout<<e[i].renta<<"	"<<"|"<<"\t";
		cout<<e[i].totalprestamo<<"	"<<"|"<<"\t";
		cout<<e[i].departamento<<"	"<<"|"<<"\t";
		cout<<e[i].puesto<<"	"<<"|"<<"\t";
		cout<<endl;	
				}
		system("Pause");
						}
