#include <list>
#include <iostream>

using namespace std;

// A linked list node
class Node
{
    public:
    int data;
    Node *next;
};

/* Given a reference (pointer to pointer)
to the head of a list and an int,
inserts a new node on the front of the list. */
void push(Node** head_ref, int new_data)
{
    /* 1. allocate node */
    Node* new_node = new Node();
 
    /* 2. put in the data */
    new_node->data = new_data;
 
    /* 3. Make next of new node as head */
    new_node->next = (*head_ref);
 
    /* 4. move the head to point to the new node */
    (*head_ref) = new_node;
}

/* Given a reference (pointer to pointer) to the head
of a list and an int, appends a new node at the end */
void append(Node** head_ref, int new_data)
{
    /* 1. allocate node */
    Node* new_node = new Node();
 
    Node *last = *head_ref; /* used in step 5*/
 
    /* 2. put in the data */
    new_node->data = new_data;
 
    /* 3. This new node is going to be
    the last node, so make next of
    it as NULL*/
    new_node->next = NULL;
 
    /* 4. If the Linked List is empty,
    then make the new node as head */
    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }
 
    /* 5. Else traverse till the last node */
    while (last->next != NULL)
    {
        last = last->next;
    }
 
    /* 6. Change the next of last node */
    last->next = new_node;
    return;
}
 
// This function prints contents of
// linked list starting from head
void printList(Node *node)
{
    while (node != NULL)
    {
        cout<<" "<<node->data;
        node = node->next;
    }
}


/* Driver code*/
int main()
{
    /* Start with the empty list */
    Node* head = NULL;
     
    // Insert 6. So linked list becomes 6->NULL
    append(&head, 6);
     
    cout << "Created Linked list is: " ; printList(head);
    cout << endl;
    return 0;
}
