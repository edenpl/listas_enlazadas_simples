#include<iostream>
#include "Node.h"
#include "MENU.h"
using namespace std;
int Menu(){
    int opcion;
    //menu
	while(opcion >= 1 || opcion <= 4){	
	cout<<"1) Insercion\n";
        cout<<"2) Mostrar\n";
        cout<<"3) Busqueda\n";
        cout<<"4) Eliminacion\n";
        cout<<"5) Salir\n";
        cout<<"opcion : ";
        cin>>opcion;
        if(opcion < 1 || opcion > 4){
            system("cls");
            cout<<"Error";
            system("cls");
        }       
    return opcion;}
}
int main(){
    int opcion;
    Node *aux = NULL ,*recorrido = NULL;
    LinkedList *lista = new LinkedList();
    int numero = 0;    
	while(opcion != 5){
        cout<<"MENU\n";
        cout<<"1) Insercion\n";
        cout<<"2) Mostrar\n";
        cout<<"3) Busqueda\n";
        cout<<"4) Eliminacion\n";
        cout<<"5) Salir\n";
        cout<<"opcion : ";
        cin>>opcion;
        if(opcion < 1 || opcion > 4){
            system("cls");// limpiar la pantalla
 
        }
        //swith para la seleccio del menu de opciones:  rtc
        switch (opcion){
        	//Insercion
            case 1: 
                cout<<"Insercion \n\n";
                aux = new Node();
                cout<<"Ingrese un numero : ";
                cin>>numero;
                aux->set_elem(numero);
                lista->Agregar(aux);
                cout<<"Numero ha sido almacenado con exito\n";
                break;
            //Mostrar
            case 2: 
            cout<<"Mostrar\n\n";
            recorrido = lista->Get_cabeza();
                while(recorrido != NULL){
                    cout<<recorrido->get_elem()<<endl;
                    recorrido=recorrido->get_link();
                }
                break;
            //Busqueda
            case 3:
                cout<<"Busqueda\n\n";
                cout<<"Ingrese el numero que desee encontrar\n";
                cin>>numero;
                recorrido = lista->Buscar(numero);
                if(recorrido != NULL){
                    cout<<"El numero fue hallado "<<recorrido->get_elem()<<endl;
                }
                else{
                    cout<<"El numero no fue encontrado en la lista\n";
                }
                break;
            //Eliminacion
            case 4:
                cout<<"Eliminacion\n\n";
                cout<<"Ingrese el numero que desee eliminar\n";
                cin>>numero;
                recorrido = lista->Buscar(numero);
                if(recorrido != NULL){
                    lista->Eliminar(numero);
                    cout<<"Numero eliminado con exito \n";
                }
                else{
                    cout<<"El numero ingresado no existe\n";
                }
                break;
            //FIN
            case 5:     
                cout<<"FIN\n";
                break;
        }
        system("pause");
        system("cls");
	}
    return 0; 
}
