
#include<iostream>
using namespace std;

class LinkedList{
    private:
        Node *head;
    public:
        LinkedList()
        {
            head = NULL;
        }
        void Set_cabeza(Node *C)
        {
            head = C;
        }
        Node* Get_cabeza()
        {
            return head;
        }   
        
        Node* Get_ultimo()
        {
            Node *ultimo = Get_cabeza();
            while(ultimo->get_link() != NULL){
                ultimo = ultimo->get_link(); 
            }
            return ultimo;
        }
        void Agregar(Node *nuevo)
        {
            if(Get_cabeza() == NULL)
                Set_cabeza(nuevo);
            else
                Get_ultimo()->set_link(nuevo);
        
        }

        Node* Buscar(int numero)
        {
            Node *busqueda = Get_cabeza();
            while(busqueda != NULL && busqueda->get_elem() != numero){
                busqueda = busqueda->get_link();
            }
            return busqueda;
        }
        void Eliminar(int numero)
        {
            Node *busqueda = Get_cabeza();
            Node *anterior = NULL;
            if(busqueda->get_elem() == numero){
                Set_cabeza(Get_cabeza()->get_link());
            }
            else{
                while(busqueda != NULL && busqueda->get_elem() != numero){
                    anterior = busqueda;
                    busqueda = busqueda->get_link();
                }
                if(busqueda != NULL){
                    anterior->set_link(busqueda->get_link());
                }
            }
            delete busqueda;
        }
        ~LinkedList(){
        }


};

