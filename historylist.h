#ifndef HISTORYLIST_H
#define HISTORYLIST_H

#include <iostream>
#include <string.h>

class HistoryList; //forward 

class Node{
    friend class HistoryList;
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

class HistoryList{
    private:
        Node* head;
        Node* tail;
        Node* current;
    
    public:
    HistoryList();
    ~HistoryList();

    
};





#endif