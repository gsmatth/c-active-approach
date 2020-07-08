#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

//----------------------------------//
struct Person
{
  char name[30];
  int age;
};

struct Node
{
  Person data;
  Node * next;
};

Node *  CreateNode(Person person)
{
  Node * new_node = new Node;
  new_node->data = person;
  new_node->next = nullptr;

  return new_node;
}

//overload CreateNode function
Node * CreateNode(char name[], int age)
{
  Node * new_node = new Node;
  strcpy(new_node->data.name, name);
  new_node->data.age = age;
  new_node->next = nullptr;

  return new_node;
}

//---------------------------------------//
struct Student
{
  int id;
  char major[50];
  float gpa;
};

struct StudentNode
{
  Student data;
  StudentNode * next;
};

/*
Notice that the CreateStudentNode function has several tasks. The first is to dynamically allocate a new node, as all nodes in the linked list must be dynamically allocated. The next task assigns the data to the newly allocated node. The third task, and probably the most important, is to make sure the next pointer of the node is set to null.
*/
StudentNode * CreateStudentNode(Student student)
{
  StudentNode * new_node = new StudentNode;
  new_node->data = student;
  new_node->next = nullptr;

  return new_node;
}

StudentNode * CreateStudentNode( int id, char major[50], float gpa)
{
  StudentNode * new_node = new StudentNode;
  new_node->data.id = id;
  strcpy(new_node->data.major, major);
  new_node->data.gpa = gpa;
  new_node->next = nullptr;

  return new_node;
}

//we are passing a pointer by reference for head parameter
void Prepend( StudentNode * student_node, StudentNode * & head)
{
  student_node->next = head;
  head =  student_node;
}




int main(){

// Node * head = nullptr;
StudentNode * head = nullptr;
Student test_student {12345, "Chemistry", 3.5};
Student test_student1 {5678, "Chemistry", 3.5};
Student test_student2 {2468, "Chemistry", 3.5};
StudentNode * test_student_node = CreateStudentNode(test_student);
StudentNode * test_student_node1 = CreateStudentNode(test_student1);
StudentNode * test_student_node2 = CreateStudentNode(test_student2);
Prepend(test_student_node,  head);
Prepend(test_student_node1,  head);
Prepend(test_student_node2,  head);













  return 0;
}