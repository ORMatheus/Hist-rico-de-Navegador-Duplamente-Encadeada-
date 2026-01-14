#include <iostream>
#include <string.h>


class Node{
    private:
        std::string url;
        Node* next;
        Node* prev;
    public:
    Node(const std::string& str){
        this->url=str;
        this->next=nullptr;
        this->prev=nullptr;
    }
};