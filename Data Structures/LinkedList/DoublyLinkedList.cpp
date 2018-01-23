#include <cstdio>
#include <cstdlib>
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