#include<iostream>
#include "Node.h"
#include "LinkedList.h"
using namespace std;
int Menu(){
    int opcion;
    do{
        cout<<"\tMenu\n";
        cout<<"1 - Insercion\n";
        cout<<"2 - Mostrar\n";
        cout<<"3 - Busqueda\n";
        cout<<"4 - Eliminacion\n";
        cout<<"5 - Salir\n";
        cout<<"opcion : ";
        cin>>opcion;
        if(opcion < 1 || opcion > 4){
            system("cls");
            cout<<"Error";
            system("cls");
        }
    }while(opcion >= 1 || opcion <= 4);
    return opcion;
}
int main(){

    int opcion;
    Node *aux = NULL ,*recorrido = NULL;
    LinkedList *lista = new LinkedList();
    int numero = 0;
    do{
        cout<<"\tMenu\n";
        cout<<"1 - Insercion\n";
        cout<<"2 - Mostrar\n";
        cout<<"3 - Busqueda\n";
        cout<<"4 - Eliminacion\n";
        cout<<"5 - Salir\n";
        cout<<"opcion : ";
        cin>>opcion;
        if(opcion < 1 || opcion > 4){
            system("cls");
            cout<<"Error";
            system("pause");
            system("cls");
        }
        switch (opcion){
            case 1: 
                cout<<"Insercion \n\n";
                aux = new Node();
                cout<<"Ingrese un numero : ";
                cin>>numero;
                aux->set_elem(numero);
                lista->Agregar(aux);
                cout<<"Numero ha sido almacenado con exito mi querido amigo\n";
                break;
            case 2: 
            cout<<"Mostrar\n\n";
            recorrido = lista->Get_cabeza();
                while(recorrido != NULL){
                    cout<<recorrido->get_elem()<<endl;
                    recorrido=recorrido->get_link();
                }
                break;
            case 3:
                cout<<"Busqueda\n\n";
                cout<<"Ingrese el numero que usted desee encontrar\n";
                cin>>numero;
                recorrido = lista->Buscar(numero);
                if(recorrido != NULL){
                    cout<<"El numero que usted busco fue hallado "<<recorrido->get_elem()<<endl;
                }
                else{
                    cout<<"El numero buscado no fue encontrado en la lista\n";
                }
                break;
            case 4:
                cout<<"Eliminacion\n\n";
                cout<<"Ingrese le numero que usted desee eliminar\n";
                cin>>numero;
                recorrido = lista->Buscar(numero);
                if(recorrido != NULL){
                    lista->Eliminar(numero);
                    cout<<"Numero eliminado con exito mi amigo\n";
                }
                else{
                    cout<<"El numero ingresado no existe o no se hallo\n";
                }
                break;
            case 5:     
                cout<<"Se acabo nuestro viaje al conocimiento mi amigo , pero descuida es temporal .. fuerza cientifico\n";
                break;
        }
        system("pause");
        system("cls");
    }while(opcion != 5);
    return 0; 
}
