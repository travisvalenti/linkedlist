//Course: SENG1120
//Coded by: Tom Williams
//Student Number: 3282012
#ifndef NODE_H
#define NODE_H
#include "student.h"

struct Node
{
public:
  // Constructor
  Node();
  Node(Student student);

  // Destructor
  ~Node();

  // Getters
  Node* getNext();
  Node* getPrev();
  Node* getStudent();

  // Setters
  void setNext();
  void setPrev();
  void setStudent();

private:
Student *student;
Node *next;
Node *prev;
};

#endif
