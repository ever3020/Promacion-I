/*
Este programa fue hecho por: Ever Alvarez
Carnet: AG18012
año: 1
INGENIERIA DE SISTEMAS INFORMATICOS 
*/



#include <iostream>
#include <stdlib.h>

using namespace std;

 string label[3][3] = {"-","-","-","-","-","-","-","-","-"};

    int turnos = 0;
    int info=0;
    int info2=0;
    int x;
    int y;
    int gana=0;
    int replay=0;


 void labelClean()
    {
        for (int i=0; i <3; i++)
            {
                label[i][0] = "-";
            }

        for (int j=0; j<3;j++)
            {
                label[j][1] = "-";
            }

        for(int k=0; k<3; k++)
            {
                label[k][2] = "-";
            }
    }
//aqui la evaluacion de quien gana
 void ganador()
    {
        if((gana==0)or (gana==3))
            {
                for(int b=0; b <3;b++)
                    if ((label[0][b]=="X")&&(label[1][b]=="X")&&(label[2][b]=="X"))
                        {
                            gana=1;
                        }

                for(int b=0; b <3; b++)
                    if ((label[b][0]=="X")&&(label[b][1]=="X")&&(label[b][2]=="X"))
                        {
                            gana=1;
                        }

                if ((label[0][0]=="X")&&(label[1][1]=="X")&&(label[2][2]=="X"))
                    {
                        gana=1;
                    }

                if ((label[0][2]=="X")&&(label[1][1]=="X")&&(label[2][0]=="X"))
                    {
                        gana=1;
                    }

                for(int z=0; z <3;z++)
                    if ((label[0][z]=="O")&&(label[1][z]=="O")&&(label[2][z]=="O"))
                        {
                            gana=2;
                        }

                for(int z=0; z <3; z++)
                    if ((label[z][0]=="O")&&(label[z][1]=="O")&&(label[z][2]=="O"))
                        {
                            gana=2;
                        }

                if ((label[0][0]=="O")&&(label[1][1]=="O")&&(label[2][2]=="O"))
                    {
                        gana=2;
                    }

                if ((label[0][2]=="O")&&(label[1][1]=="O")&&(label[2][0]=="O"))
                    {
                        gana=2;
                    }
            }
    }

 // este muestra el tablero
 void tablero()
    {
        cout << "________________________________________" << endl;
        cout << "para jugar debes de ingresar un numero " << endl;
        cout << "entre 1 y 9, la primera ubicacion es 1 " << endl;
        cout << "y se cuenta hacia la derecha "<< endl;
        cout << "________________________________________"<<endl;

        for (int i=0; i <3; i++)
            {
                cout << "|"  << label[i][0] << "|" << "\t";
            }
        cout << endl;

        for (int j=0; j<3;j++)
            {
                cout << "|" << label[j][1] << "|" << "\t";
            }
        cout << endl;

        for( int k=0; k<3; k++)
            {
                cout << "|" << label[k][2]<< "|" <<"\t" ;
            }
        cout << endl;
    }

// este va ser la funcion la cual hace que se realice la jugada
 void turno1(int x)
    {
        if ((x>9)or(x<1))
            {
                cout << "error debes ingresar un numero entre 1 y 9"<< endl;
                cout <<"porfavor vuelve a intenarlo"<< endl;
                info2=0;
                turnos--;
                cin >> x;
                turno1(x);
            }
        else do
            {
                for(int a=1; a <4; a++)
                    if (x == a)
                        {
                            if((label[a-1][0] == "-")&&(info2==0))
                                {
                                    label[a-1][0] = "X";
                                }
                            else if ((label[a-1][0]=="O")or(label[a-1][0] == "X"))
                                {
                                    info2=1;
                                }
                        }

                for(int a=4; a<7; a++)
                    if (x == a)
                        {
                            if((label[a-4][1] == "-")&&(info2==0))
                                {
                                    label[a-4][1] = "X";
                                }
                            else if ((label[a-4][1]=="O")or(label[a-4][1] == "X"))
                                {
                                    info2=1;
                                }
                        }

                for(int a=7; a<10; a++)
                    if (x == a)
                        {
                            if ((label[a-7][2] == "-")&&(info2==0))
                                {
                                    label[a-7][2] = "X";
                                }
                            else if ((label[a-7][2]=="O")or(label[a-7][2] == "X"))
                                {
                                    info2=1;
                                }
                        }

            }while(!(x<10 && x>=1));
        system("cls");
        //system("clear"); //linux
        turnos++; // esta variable sirve de control de turnos

        if (info2==1)
            {
                system("cls");
                //system("clear");
                tablero(); //muestra el tablero con las jugadas que se llevan

                cout << endl;
                cout <<"Jugador 1"<< endl;
                cout <<"esta poscision ya se encuentra ocupada"<< endl;
                cout <<"porfavor vuelve a intenarlo"<< endl;
                info2=0;//para el reintento de una ubicacon
                turnos--; //para no incrementar el turno erroneamente ya que se vuelve a intentar
                cin >> x;
                turno1(x);
            }
        else
            tablero();

    }

 // esta es la funcion la cual recibe la jugada del jugador 2
 void  turno2(int y)
    {
        if ((y>9)||(y < 0 && y <1 )) // aqui se verfica el rango del valor que se debe ingresar
            {
                cout << "error debes ingresar un numero entre 1 y 9"<< endl;
                cout <<"porfavor vuelve a intenarlo"<< endl;
                info=0;
                turnos--;//para evitar el error de incremento de los turnos
                cin >> y;
                turno2(y);

            }
        else do
            {

 // esta funcion verifica en que posicon va a quedar el turno
 // del jugador 2 si esta esta ocupada por el jugador 1
 // entonces da el mensaje de la poscision esta ocupada

                for(int a=1; a <4; a++)
                    {
                        if (y == a)
                            {
                                if((label[a-1][0] == "-") &&(info == 0))
                                    {
                                        label[a-1][0] = "O";
                                    }

                                else if((label[a-1][0] == "X")or(label[a-1][0] == "O"))
                                    {
                                        info = 1;
                                    }
                            }
                    }

                for(int a=4; a<7; a++)
                    {
                        if (y == a)
                            {
                                if((label[a-4][1] == "-")&&(info == 0))
                                    {
                                        label[a-4][1] = "O";
                                    }

                                else if ((label[a-4][1] == "X")or(label[a-4][1] == "O"))
                                    {
                                        info = 1;
                                    }
                            }
                    }
                for(int a=7; a<10; a++)
                    {
                        if (y == a)
                            {
                                if((label[a-7][2] == "-")&&(info == 0))
                                    {
                                        label[a-7][2] = "O";
                                    }

                                else if ((label[a-7][2] == "X")or(label[a-7][2] == "O"))
                                    {
                                        info = 1;
                                    }
                            }
                    }
            }
        while(!(y<10 && y>=1));
        system("cls");
        // system("clear") // para linux
        turnos++;
        if (info == 1)
            {
                system("cls");
                tablero();

                cout << endl;
                cout << "Jugador 2" << endl;
                cout <<"esta poscision ya se encuentra ocupada"<< endl;
                cout <<"porfavor vuelve a intenarlo"<< endl;
                info=0;
                turnos--;
                cin >> y;
                turno2(y);
            }
        else
            tablero();
    }

 void limpiar()
    {
        turnos=0;
        gana=0;
        labelClean();
    }

//***********************************************
//FUNCION PRINCIPAL
 int main()
    {
        rejuego: //esta variable es para comenzar de nuevo el juego

    while (turnos < 9)
        {
            system("cls");
            //system("clear") //para linux
            tablero();

            cout << "" << endl;
            cout << "Turno del jugador 1" << endl;
            cout << "porfavor introduce la ubicacion" << endl;

            cin >> x;
            cin.get();
            turno1(x);
            ganador();// aqui se evalua el tablero para saber quien gana

            if(gana==1)
                {
                    cout <<"GANA EL JUGADOR 1"<< endl;
                    cin.get();
                    cout << "Juego terminado" << endl;
                    cin.get();
                    cout << "desea jugar de nuevo" << endl;
                    cout << "1 - SI " << endl;
                    cout << "2 - NO " << endl;
                    cin >> replay;

                    if(replay==1)
                        {
                            limpiar(); // esta funcio reinicia las variables de verificacion
                            goto rejuego;
                        }
                    else if (replay ==2)
                        {
                            return 0;
                        }
                    return 0;
                }

            if (turnos<=8) // este evalua si ya se terminaron los turnos
                {

                    cout << "" <<endl;
                    cout << "ahora es el turno del juador 2"<< endl;
                    cout << "introduce la posicion " << endl;
                    cin >> y;
                    turno2(y);
                    ganador();

                    if (gana==2)
                        {
                            cout << endl;
                            cout << "gana el jugador 2"<< endl;
                            cout << "juego terminado" << endl;

                            cout << "desea jugar de nuevo" << endl;
                            cout << "1 - SI " << endl;
                            cout << "2 - NO " << endl;
                            cin >> replay;

                            if(replay==1)
                                {
                                    limpiar();// esta funcio reinicia las variables de verificacion
                                    goto rejuego;
                                }
                            else if (replay ==2)
                                {
                                    return 0;
                                }
                            return 0;
                        }
                }
            ganador();
        }


    if(gana==0)
        {
            cout << "NADIE GANA" << endl;
            cout << "juego terminado"<< endl;
            cin.get();
            cout << "desea jugar de nuevo" << endl;
            cout << "1 - SI " << endl;
            cout << "2 - NO " << endl;
            cin >> replay;

            if(replay==1)
                {
                    limpiar(); // esta funcio reinicia las variables de verificacion
                  goto  rejuego;
                }
            else if (replay ==2)
                {
                    cout << "fin" << endl;
                    return 0;
                }

            return 0;
        }
    cout << "fin" << endl;

    return 0;
    }
