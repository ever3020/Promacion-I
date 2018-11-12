/* 
Este programa fue hecho por: Ever Gonzalez.
carnet: AG18012
año: 1
*/
/**Una empresa necesita calcular la produccion diaria de bebidas 
y los insumos requeridos para la elbaoracion de refresco**/

//Librerias o directorios utilizados.

#include <iostream>

//Declaraciones globales.

using namespace std;

//Prototipo de funciones o declaracion de funcines.

void menu();
int validacion(int respuesta);
void total( int sodita);
void total1(int juguito);

// Iniciamos o declaramos la funcion main de tipo entero 

int main(){
	int sodas;
	int jugos;
	float agua;
	float azucar;
		system("color 30");
		cout<<"Ingrese el total de la produccion diaria de sodas: "<<endl;
		cin>>sodas;
		validacion(sodas);
		cout<<"Ingrese el total de la produccion diaria de jugos: "<<endl;
		cin>>jugos;
		validacion(jugos);
		
				system("cls");
				total(sodas);
				total1(jugos);
	menu();
	return 0;
}
//Final de la funcion principal o "main"  
// declaramos la funcion de tipo "void" por que esta no retornara ningun valor.
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
// Final de la funcion "menu" y comienza la funcion "valdacion".
int validacion(int respuesta){
        while ( cin.fail () ){ //vaidacion si se ingresa una letra.
                cin.clear();
                cin.ignore(1000,'\n');
                system("cls");
                cout<<"Las letras no son validas"<<endl;//mensaje de error de ingreso.
                menu();
        }
        if (respuesta <= 0 ){ //validacion si se ingresa un numero negativo.
                system("cls");
                cout<<"los numeros negativos no son validos"<<endl;//mensaje de error de ingreso.2
                menu();
        }	
}
//Finaliza la funcion "validacion" y comienza la funcion "total".
void total( int sodita){
	float water=0.5; 
	float sugar=0.8;
	float insumos1 = sodita * water;
	float insumos2 = sodita * sugar;
	cout<<"****Produccion de sodas************************"<<endl;
	cout<<"El total de sodas es:  "<<sodita<<endl;
	cout<<"El total de agua es:   "<<insumos1<<"L"<<endl;
	cout<<"El total de azucar es: "<<insumos2<<"Kg"<<endl;
	cout<<"***********************************************"<<endl;
	
}
//Finaliza la funcion "total" y comienza la funcion "total1".
void total1( int juguito){
	float water=0.6; 
	float sugar=0.7;
	float insumos1 = juguito * water;
	float insumos2 = juguito * sugar;
	cout<<"****Produccion de jugos************************"<<endl;
	cout<<"****El total de jugos es:  "<<juguito<<"   ****"<<endl;
	cout<<"****El total de agua es:   "<<insumos1<<"L ****"<<endl;
	cout<<"****El total de azucar es: "<<insumos2<<"Kg****"<<endl;
	cout<<"***********************************************"<<endl;
	
}
