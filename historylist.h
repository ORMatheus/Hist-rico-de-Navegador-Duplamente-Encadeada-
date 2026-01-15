#ifndef HISTORYLIST_H
#define HISTORYLIST_H

#include <string>

class HistoryList; //forward 

class Node{
    friend class HistoryList;
    private:
        std::string url;
        Node* next;
        Node* prev;
    public:
    Node(const std::string& str);
};

class HistoryList{
    private:
        Node* head;
        Node* tail;
        Node* current;
        void clearForward();
        
    
    public:
    void visit(const std::string& url);
    HistoryList();
    ~HistoryList();
    bool back();    

    
};





#endif