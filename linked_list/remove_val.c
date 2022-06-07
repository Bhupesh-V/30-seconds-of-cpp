#include <stdio.h>

//Singly Linked Node implementation storing integer values
struct SLNode{
    int val;
    struct SLNode* next;
};

//traverse list and print values
void print_list(struct SLNode* n){
  while (n != NULL){
    printf("%i ", n -> val);
    n = n -> next;
  }
  printf("\n");
}

//insert values at front of list, return the updated list. List must have at least one node defined.
struct SLNode* insert_front(int newVal, struct SLNode* head){
    struct SLNode* new_node = NULL;
    new_node = (struct SLNode*)malloc(sizeof(struct SLNode));
    //update val of new_node
    new_node -> val = newVal;
    //update new_node to point to current head node
    new_node -> next = head;

    //return new_node, so 'head' in calling function can be updated
    return new_node;
}

//Iterate through linked list and remove node with matching value. List must contain at least 2 nodes.
void remove_val(int valToRemove, struct SLNode* head){
    //define iteratores
    struct SLNode* prev = NULL;
    struct SLNode* curr = head;
    //traverse to end of list
    while (curr != NULL){
        if (curr -> val == valToRemove) {
            prev -> next = curr -> next;
        }
        prev = curr;
        curr = curr -> next;
    }
    //if end of list is encountered, valToRemove not found
    return;
}

int main() {
    struct SLNode* list = NULL;
    //define first node of 'list'
    list = (struct SLNode*)malloc(sizeof(struct SLNode));
    list -> val = 3;
    list -> next = NULL;
    //insert values 1 and 9 to 'list'
    list = insert_front(1, list);
    list = insert_front(9, list);
    print_list(list);
    //remove value 1 from 'list'
    remove_val(1, list);
    print_list(list);
    return 0;
}
