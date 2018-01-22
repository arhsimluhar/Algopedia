//In this will have different ways of implmenting linkedList

//C way
#include "stdio.h"
#include "stdlib.h"
struct node
{
  int data;
  struct node * next;
};


 class linkedList
{
        struct node *head;
    public:
        void insertBegining(int);
        void insertEnd(int);
        int countElement();
        void display();
        linkedList(){head = NULL;}

};
//display the elements in the linkedList
void linkedList::display()
{
    struct node* current = head;
    while(current)
    {
        printf("%d -> ",current->data);
        current = current->next;
    }
}
//counting the number of elements in list
int linkedList::countElement()
{
    struct node *current = head;
    int count = 0;
    while(current)
    {
        current = current-> next;
        ++count;
    }
    printf("%d",count);
}

//inserting node at the beginning
void linkedList::insertBegining(int n)
{
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = n;
    if(!head)
        head = temp;
    else
        temp->next = head;
        head = temp;
}

int main()
{
  int n;
  linkedList L;
  printf("Enter your choice:\n");
  printf("1. Number of elements  in the list.\n");
  printf("2. Insert element at the beginning of the list.\n");
  printf("3. Insert element at the end of the  list.\n");
  printf("4. Display the elments of the list.\n");
  scanf("%d",&n);
  int i;

  while(n<5)
  {
     switch(n)
     {
        case 1:
            L.countElement();
            break;
        case 2:
            scanf("%d",&i);
            L.insertBegining(i);
            break;
        case 3:
            scanf("%d",&i);
           // L.insertEnd(i);
            break;
        case 4:
            L.display();
            break;


     }
     scanf("%d",&n);
  }

  return 0;
}
