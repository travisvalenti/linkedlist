//Course: SENG1120
//Coded by: Tom Williams
//Student Number: 3282012
#include "Node.h"
Node::Node()
{
  next = NULL;
  prev = NULL;
  student = NULL;
}

Node::Node(Student *newStudent)
{
  next = NULL;
  prev = NULL;
  student = newStudent;
}


// Empty Destructor
Node::~Node(){}


// Getters
Node* Node::getNext()
{
  return next;
}

Node* Node::getPrev()
{
  return prev;
}

Student* Node::getStudent()
{
  return student;
}


// Setters
void Node::setNext(Node *newNext)
{
  next = newNext;
}

void Node::setPrev(Node *newPrev)
{
  prev = newPrev;
}

void Node::setStudent(Student *newStu)
{
  student = newStu;
}
