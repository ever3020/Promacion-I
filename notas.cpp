#include <cstdlib>
#include <iostream>
#include <windows.h>

using namespace std;

int main(){
    
      
    float notas[5];
    float suma = 0;
    float promedio;
    
    for (int i=0;i<=4;i++){
        cout<<"Ingrese la nota "<<i+1<<endl;
        cin>>notas[i];
        suma=suma+notas[i];
        
        	while(cin.fail()){//esta funcio permite saber al programa si los datos ingresados son numeros
		cin.clear();
		cin.ignore(1000,'\n');
		cout<<"\nPor favor ingrese bien los datos solicitados: ";//y si no son numeros se le envia este mensaje al usuario y se repite el proceso
		cin>>notas[i];//si la variable es correcta se guarda en "ingreso"
	}
	while(notas[i] <= 0){//utilizamos la misma funcion pero esta ves le damos una orden "que si el numero ingreasdo es negativo o igual a cero" no sera 
	//tomado como valido.
		cout<<"\nPor favor ingrese bien los datos solicitados: ";//si el dato ingresado no es el correcto se le mosgtrara este mensaje al usuario
		cin>>notas[i];//si el dato ingresado es correcto se guardara en "ingreso"	
	}
    }
    promedio=suma/5;
    	   cout<<"las notas son: "<<endl;
	   for (int i=0;i<=4;i++){
            cout<<"N"<<i+1<<":"<<notas[i]<<endl;
            }
    cout << "El promedio es de: "<<promedio<<endl;
    system("pause");
    return EXIT_SUCCESS;
}
