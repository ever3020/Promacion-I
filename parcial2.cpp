/*
Este programa fue hecho por: Ever Alvarez
año:1
carrera: Ingenieria de sistemas informaticos
materia: Programacion I
*/

//Linrerias a utilizar.

#include <iostream>
#include <math.h>
#include <string.h>
//Declaraciones globales.

using namespace std;

//Prototipos de funciones.

void solicitud();
void menu();
int validacion(int respuesta);
void fibonacci();
void taylor();
double exponencial(double,unsigned long int);
int factorial(unsigned long int); 



//Inicia funcion main.

int main() {
	solicitud();
	system("PAUSE");
	return 0;
}

//Finaliza funcion main.

//Inicia implemnetacion de funciones.
void solicitud(){
	int resp;


	
		cout<<"Bienvenido a nuestro sistema!"<<endl;
		cout<<"Que desea hacer hoy?"<<endl;
		cout<<"1) Resolver la serie Fibonacci."<<endl;
		cout<<"2) Resolver la serie de Taylor."<<endl;
		cout<<"3) Ver el historial."<<endl;
		cout<<"4) Salir."<<endl;
		cout<<"Digite el numero de su eleccion!..."<<endl;
		cin>>resp;
		validacion(resp);
			
			if(resp == 1){
				fibonacci();
			}
			else if(resp == 2){
				taylor();
			}
			else if(resp == 3){
				cout<<"Lo siento mucho no pude anexar el archivo de texto"<<endl;
				cout<<"Investigue todo lo que pude pero no lo logre :')";
				menu();			
			}
			else if(resp == 4){	
				        system("cls");//comando para eliminar todo el texto en pantalla.
                        cout<<"-------------------------------------"<<endl;
                        cout<<"Un gusto trabajar para usted!"<<endl;
                        cout<<"-------------------------------------"<<endl;                        
			}
			else{
				system("CLS");
				cout<<"Esta no es una opcion valida!!!"<<endl;
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

int validacion(int respuesta){
        while ( cin.fail () || respuesta < 0 ){
                cin.clear();
                cin.ignore(1000,'\n');
                system("cls");
                cout<<"El caracter ingresado no es valido"<<endl;//mensaje de error de ingreso.
                cout<<"POr favor ingrese un valor valido"<<endl;
                menu();
        }
}

void fibonacci(){
		int x=0;
		int y=1;
		int z=1;
		int num;
		string nombre;	
				cout<<"De cuantos numeros desea calcular la serie?"<<endl; 
				cin>>num;
				cout<<"Ingrese su nombre: "<<endl;
				cin>>nombre; 
				validacion(num);
				system("CLS");
				cout<<"1 ";
				for(int i=0;i<=num;i++){
					z = x +y;
					cout<<z<<" ";
					x = y;
					y = z;
				}
				cout<<endl;	
					system("PAUSE");
						menu();	
	
}

void taylor(){
	system("CLS");
	string nombre;
	unsigned long int n=0; //nuemro n de la serie
    double x=0; //valor de x
    cout<<"Ingrese n=";
    cin>>n;
    cout<<"Ingrese x=";
    cin>>x;
    cout<<"Ingrese su nombre: "<<endl;
 	cin>>nombre;
 
    cout<<"Resultado es= "<<exponencial(x,n)<<endl;
    system("PAUSE");
    system("CLS");
    menu();
}

double exponencial(double x,unsigned long int n)
{
    double resultado=0; //varibale para devolver
    for (unsigned int i=0;i<=n;i++) //desde n=0 hasta donde llegue la serie
    {
        resultado+=pow(x,i)/factorial(i);   //uso de la función pow de la libreia cmath se saca esa potencia y con la función factorial se obtiene ese denominador con ese valor de n
    }
    return resultado; //devuelvo valor
}
 
int factorial(unsigned long int i)
{
    unsigned int resultado=1; //valor inicial 1
    if (i==0)  //si es cero se devuelve factoril 1
    {
        return resultado;
    }else     //sino se saca el factorial
    {
        while(i>1)
        {
            resultado=resultado*i;
            i--;
        }
 
    return resultado;
 
    }
}





