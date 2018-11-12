/* 
Este programa fue hecho por: Ever Gonzalez.
carnet: AG18012
año: 1
*/

//Librerias o directorios utilizados.

#include <iostream>
#include <string.h>

//Declaraciones globales.

using namespace std;

//Potoripo de funciones.

void vehiculos();
void solicitud();
void menu();
void decision();
int procesoRenta(int seleccion);
int registros(int aspirante);


//Esttructuras a utilizar
struct registro{
	string nombre;
	string apellido;
	string dui;
	string licencia;
	int numCarro;
}registro1;
struct catalogo{
	string marca;
	string tipo;
	string modelo;
	string capacidad;
	string tipoCombustible;
	string numeroChasis;
	string transmision;
}inventario[5];

//Inicia función main.

int main(){
	solicitud();

    return 0;
}
//Finaliza función main.

void solicitud(){
	int inicioRenta;
		cout<<"Bienvenido a *Panamerican Renta Cars*"<<endl;
		cout<<"Que desea hacer hoy?"<<endl;
		cout<<"Si desea ver nuestro catalogo digite 1."<<endl;
		cout<<"Si desea regresar un vehiculo digite 2."<<endl;
		cin>>inicioRenta;
		system("cls");
			if(inicioRenta == 1){
				cout<<"Este es el catalogo de nuestros vehiculos."<<endl;
				vehiculos();
			}
			else if(inicioRenta == 2){
				cout<<"ingrese el numero de trajeta del vehicul rentado."<<endl;
			}
			else{
				cout<<"La opcion no es valida..."<<endl;
				menu();
			}
}

void menu(){
			int r;//declaramos "r" para almacenar la respuesta del usuario.
            cout<<"quieres volver a utilizar el sistema?\n 1. si \n 2. no"<<endl;//impresion en pantalla para solicitar una respuesta al usuario
            cin>>r;
                if(r == 1){
                        system("cls");//comando para eliminar todo el texto en pantalla.
                        main();//llamada a la funcion main.
                }
                else{
                        system("cls");//comando para eliminar todo el texto en pantalla.
                        cout<<"-------------------------------------"<<endl;
                        cout<<"Un gusto trabajar para usted!"<<endl;
                        cout<<"-------------------------------------"<<endl;                        
                        system("pause");
                        exit(0);
                }  
}
void vehiculos(){
	inventario[0].marca = "Nissan";
	inventario[0].tipo = "Sedan";
	inventario[0].modelo = "Sentra";
	inventario[0].capacidad = "4 pasajeros";
	inventario[0].tipoCombustible = "Gasolina";
	inventario[0].transmision =  "Automatica";
	inventario[1].marca = "Toyota";             
	inventario[1].tipo = "PickUp";             
	inventario[1].modelo = "Hilux";            
	inventario[1].capacidad = "4 pasajeros";           
	inventario[1].tipoCombustible = "Diesel";  
	inventario[1].transmision = "Estandar";
	inventario[2].marca = "Toyota";             
	inventario[2].tipo = "Camioneta";             
	inventario[2].modelo = "Sedona";            
	inventario[2].capacidad = "8 pasajeros";           
	inventario[2].tipoCombustible = "Gasolina";  
	inventario[2].transmision = "Semi-Automatica";
	inventario[3].marca = "Kia";             
	inventario[3].tipo = "Sedan";             
	inventario[3].modelo = "Picanto";            
	inventario[3].capacidad = "4 pasajeros";           
	inventario[3].tipoCombustible = "Diesel";  
	inventario[3].transmision = "Automatico";
	inventario[4].marca = "Toyota";             
	inventario[4].tipo = "PickUp";             
	inventario[4].modelo = "Tacoma";            
	inventario[4].capacidad = "4 pasajeros";           
	inventario[4].tipoCombustible = "Diesel";  
	inventario[4].transmision = "Estandar";

		for(int i = 0;i < 5; i ++){
			cout<<"Vehiculo numero "<<i+1<<":"<<endl;
			cout<<"Marca: "<<inventario[i].marca<<endl;
			cout<<"Modelo: "<<inventario[i].modelo<<endl;
			cout<<"Tipo de auto: "<<inventario[i].tipo<<endl;
			cout<<"Capacidad del vehiculo: "<<inventario[i].capacidad<<endl;
			cout<<"Tipo de combustible: "<<inventario[i].tipoCombustible<<endl;
			cout<<"Transmision del vehiculo: "<<inventario[i].transmision<<endl;
			cout<<"\n";
		} 		
	decision();
}

void decision(){
	int selec = 1;
	int resp = 1;
	cout<<"Ya a decidido que auto rentar?"<<endl;
	cout<<"Si su respuesta es 'si' digite 1!"<<endl;
	cout<<"presione cualquier otra tecla para salir"<<endl;
	cin>>resp;
		if(resp == 1){
			cout<<"Digite el numero del auto de su eleccion"<<endl;
			cin>>selec;
			system("cls");
			procesoRenta(selec);
		}
		else {
			system("cls");
			cout<<"Le esperamos nuevamente en *Panamerican Renta Cars*"<<endl;
		}
}

int procesoRenta(int seleccion){
	int n = seleccion - 1;
		cout<<"Vehiculo numero "<<n+1<<":"<<endl;
		cout<<"Marca: "<<inventario[n].marca<<endl;
		cout<<"Modelo: "<<inventario[n].modelo<<endl;
		cout<<"Tipo de auto: "<<inventario[n].tipo<<endl;
		cout<<"Capacidad del vehiculo: "<<inventario[n].capacidad<<endl;
		cout<<"Tipo de combustible: "<<inventario[n].tipoCombustible<<endl;
		cout<<"Transmision del vehiculo: "<<inventario[n].transmision<<endl;
		registros(n);

			
	return n;		
	
}
int registros(int aspirante){
	cout<<"Ingrese su nombre:";
	cin>>registro1.nombre;
	cout<<"Ingrese su apellido: ";
	cin>>registro1.apellido;
	cout<<"Ingrese su Dui: ";
	cin>>registro1.dui;
	cout<<"Ingrese su numero de Licencia: ";
	cin>>registro1.licencia;
	return 0;
}

	


