
#include<string.h>
#include<iostream>
using namespace std;
class Node{
    int elem;
    Node *next;
    public:
    Node( ){
        elem = 0;
        next = NULL;
    }
    void set_elem(int _elem)
    {
        elem = _elem;
    }
    int set_link(Node *_next)
    {
        next = _next;
    }
    int get_elem()
    {
        return elem;
    }
    Node* get_link()
    {
        return next;
    }
    ~Node(){
    }
};

