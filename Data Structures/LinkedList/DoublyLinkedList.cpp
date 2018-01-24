#include <cstdio>
#include <cstdlib>
#include <list> //this is added for C++ development
using namespace std;


//doubly linked list in c
struct node
{
	struct node* next;
	struct node* prev;
	int data;	
};


class DoublyLinkedList
{
	struct node* head;
public:
	void insertBegining(int);
    void insertEnd(int);
    int countElement();
    void display();
	DoublyLinkedList(){head = NULL};
	
};

void DoublyLinkedList::insertBegining(int n)
{
	
}
