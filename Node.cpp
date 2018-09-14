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

Node::Node(Student newStudent)
{
  next = NULL;
  prev = NULL;
  Student student(newStudent.get_name(), newStudent.get_score());
}


// Empty Destructor
Node::~Node(){
  // free(this);
}


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
  std::cout << "getStudent running" << std::endl;
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

std::ostream& operator<<(std::ostream& os, Node& dn)
{
    os << dn.getStudent();
    return os;
}
