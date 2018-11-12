/*
Este programa fue hecho por: Ever Gonzalez.
carnet: AG18012
año: 1
*/

/** Una empresa de telefonia nesesita
saber el total a pagar cada cliente por llamada **/

//Librerias o directorios utilizados.


#include <iostream>


//Declaraciones globales.

using namespace std;

//prototipo de funciones o declaracion de funciones

float costoLlamada(int min, float tar);
void  menu();
int validacion(int respuesta);

//Inicia función main.

int main(){
    float tarifa;
    float minutos;
    int r;
    float pagoTotal;

		system("color f0");
        cout<<"Ingrese el total de minutos que consumio."<<endl;
        cin>>minutos;
		validacion(minutos);
		
//comienza el bloque de condicionales para calcular la tarifa respectiva.

	    if(minutos <= 10 ){
	    	tarifa = 0.05;
	    }else if(minutos >= 11 && minutos <= 15 ){
	    	tarifa = 0.08;
	    }else if(minutos > 15 ){
	        tarifa = 0.10;
	    }
	    
	    //lamada a la funcion que retorna el costo por llamada almacenandolo en pagoTotal.
		pagoTotal = costoLlamada(minutos,tarifa);
		
    	//impresion en pantalla del costo total y la tarifa con la cual se efectua el cobro
        cout<<"El costo de su llamada es: $"<<pagoTotal<<" y su tarifa es: $"<<tarifa<<endl;

    menu();
    return 0;
}
//Finaliza función main e inicia funcion menu la cual nos servira para para decidir reutilizar el programa o no.

void menu(){//declaramos la funcion de tipo "void" por que esta no retornara ningun valor.
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
//fnaliza la funcion menu y comienza la funcion costoLlamada.
float costoLlamada(int min, float tar){
	float pago;//declaramos la variable "pago" para almacenar el producto o total a pagar por parte del usuario.
	pago = min  *  tar;//producto de multiplicar los minutos por la tarifa.


	return pago;//El valor que retorna la funcion es el almacenado en la variable "pago".
}
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

