#include <iostream>
// linked list
/**
 Insertion − Adds an element at the beginning of the list.

Deletion − Deletes an element at the beginning of the list.

Display − Displays the complete list.

Search − Searches an element using the given key.

Delete − Deletes an element using the given key.
 */
struct node
{
    int key;
    node *next_node;
};

void deletion(node *first_node);
void insertion(node *first_node);
void display(node *first_node);
void search(node *first_node, int key);
void deletion_by_key(node *first_node, int key);

void insertion(node *first_node, int key)
{
    node new_node;
    if (first_node == nullptr)
    {
        first_node = &new_node;
        first_node->key = key;
        first_node->next_node = nullptr;
    }
    else
    {
        node *temp_node = &new_node;
        temp_node->key = key;
        temp_node->next_node = first_node;
        first_node = temp_node;
    }
}

void display(node *first_node){
    node *temp_node = first_node;
    while(temp_node != nullptr){
        std::cout << temp_node->key << std::endl;
        temp_node = temp_node->next_node;
    }
}

int main()
{
    node *first_node = nullptr;
    insertion(first_node, 1);
    insertion(first_node, 2);
    insertion(first_node, 3);
    display(first_node);
    return 0;
}