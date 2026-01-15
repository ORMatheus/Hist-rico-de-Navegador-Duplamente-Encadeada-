#include "HistoryList.h"

bool HistoryList::forward(){
    if(current == nullptr || current->next==nullptr){
        return false;
    }
    current=current->next;
    return true;
}

bool HistoryList::back(){
   if(current == nullptr || current->prev == nullptr){
    return false;
   }
   current=current->prev;
   return true;
}

void HistoryList::clearForward(){
    Node* temp =current->next;

    while(temp != nullptr){
        Node* aux =temp->next;
        delete temp;
        temp=aux;
    }
    current->next=nullptr;
    tail=current;   
}

void HistoryList::visit(const std::string& url){
    if(head == nullptr){//caso a lista esjeta vazia 
        Node* novoNo=new Node(url);
        head=novoNo;
        tail=novoNo;
        current=novoNo;
        return;
    }
    if(current != tail){ //caso o no current esteja em qualquer lugar que não seja o começo e o fim.
        clearForward();
    }

    Node* novoNo=new Node(url);
    tail->next=novoNo;
    novoNo->prev=tail;
    tail=novoNo;
    current=novoNo;
}


Node::Node(const std::string& str){
    url=str;
    next=nullptr;
    prev=nullptr;
}

HistoryList::HistoryList(){
    head=nullptr;
    tail=nullptr;
    current=nullptr;
}

HistoryList::~HistoryList(){
    //por enquanto não mexer
}