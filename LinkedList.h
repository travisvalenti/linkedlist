//Course: SENG1120
//Coded by: Tom Williams
//Student Number: 3282012
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <string>
#include <iostream>
#include "Node.h"

class LinkedList
{
public:
  // Constructors
  LinkedList();

  // Destructor
    ~LinkedList();

  // Getters
  Node* getHead();
  Node* getTail();

  // Adders
  void addFirst(Node*);
  void addToHead(Student);
  void addToTail(Student);
  LinkedList* CloneList(LinkedList* CopyList, Node* curr, Student data);
  void concatenate(LinkedList);

  // Removers
  void deleteNode(Node*);
  void remove(std::string Name);
  void empty();

  // Sorters
  Node* findRec(Node* curr, std::string Name);
  Node* findName(std::string Name);
  void sortName();

  // Misc.
  double sumList(Node* curr);
  double calcAverage();

private:
  // Member Variables
  Node *head;
  Node *tail;
  int count;

};

// Overloaders

#endif
