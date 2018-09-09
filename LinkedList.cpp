//Course: SENG1120
//Coded by: Tom Williams
//Student Number: 3282012

#include <string>
#include <iostream>
#include "LinkedList.h"

  // Constructors
  LinkedList::LinkedList()
  {
    Node *head = NULL;
    Node *tail = NULL;
    count = 0;
  }

  // Empty Destructor
  LinkedList::~LinkedList(){}

  // Adders
  void LinkedList::addFirst(Node* firstNode)
  {
    head = firstNode;
    tail = firstNode;
  }

  void LinkedList::addToHead(Student student)
  {
    Node newNode(student);
    if(head == NULL)
    {
      addFirst(&newNode);
    } else {
      head->setPrev(&newNode);
      newNode.setNext(head);
      head = &newNode;
    }
    count += 1;
  }

  void LinkedList::addToTail(Student student)
  {
    Node newNode(student);
    if(tail == NULL)
    {
      addFirst(&newNode);
    }
    count += 1;
  }

  void LinkedList::concatenate(LinkedList secondList)
  {

  }


  // Removers
  void LinkedList::deleteNode(Node *newNode)
  {
    Node* curr = newNode;
    if(curr == head)
    {
      if(curr == tail)
      {
        head = NULL;
        tail = NULL;
      }
      else
      {
        head = curr->getNext();
        curr->getNext()->setPrev(NULL);
      }
    }
    else if(curr == tail)
    {
      tail = curr->getPrev();
      curr->getPrev()->setNext(NULL);
    }
    curr->~Node();
  }

  void LinkedList::remove(std::string Name)
  {
    Node* curr = findName(Name);
    deleteNode(curr);
  }

  void LinkedList::empty()
  {
    if(head != NULL)
    {
      deleteNode(head);
      empty();
    }
  }


  // Sorters
  Node* LinkedList::findRec(Node* curr, std::string Name)
  {
    if(curr->getStudent()->get_name() != Name)
    {
      curr == curr->getNext();
      findRec(curr, Name);
    }
    else
    {
      return curr;
    }
  }

  Node* LinkedList::findName(std::string Name)
  {
    Node* curr = head;
    return findRec(curr, Name);
  }

  void LinkedList::sortName()
  {

  }

  // Misc.
  double sumList(Node* curr)
  {
    double sum;
    if(curr->getNext() != NULL)
    {
      curr = curr->getNext();
      sum += sumList(curr);
    }
    sum += curr->getStudent()->get_score();
    return sum;
  }

  double LinkedList::calcAverage()
  {
    return sumList(head)/count;
  }


// Overloaders
