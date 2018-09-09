//Course: SENG1120
//Coded by: Tom Williams
//Student Number: 3282012
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"

class LinkedList
{
public:
  // Constructors
  LinkedList();

  // Destructor
    ~LinkedList();

  // Adders
  Node createNode(Student student);
  void addAfter(Node);
  void addBefore(Node);
  void addToCurrent(Node);
  void addToHead(Node);
  void addToTail(Node);
  void concatenate(LinkedList secondList);

  // Removers
  void deleteNode(Node);
  void remove(string Name);
  void empty();

  // Sorters
  void swap(string Name1, string Name2);
  void sortName();
  void sortScore();

  // Misc.
  double calcAverage();
  int count(String name);

private:
  // Member Variables
  Node *head;
  Node *tail;
  Node *current;

};

// Overloaders

#endif
