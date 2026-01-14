#include "HistoryList.h"

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