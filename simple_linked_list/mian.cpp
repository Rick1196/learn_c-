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
    struct node *next_node;
};

void deletion(node **first_node);
void insertion(node **first_node);
void display(node **first_node);
node **search(node *first_node, int key);
void deletion_by_key(node **first_node, int key);

void deletion_by_key(node **first_node, int key)
{
    node *temp = *first_node;
    node *prev = *first_node;
    while (*temp != nullptr)
    {
        if ((*temp)->key == key)
        {
            (*temp)->next_node = nullptr;
            return temp;
        }
    }
}

node **search(node *first_node, int key)
{
    node **temp = &first_node;
    while (*temp != nullptr)
    {
        if ((*temp)->key == key)
        {
            (*temp)->next_node = nullptr;
            return temp;
        }
    }
    return nullptr;
}

void deletion(node **first_node)
{
    node *temp = *first_node;
    *first_node = (*first_node)->next_node;
    free(temp);
}

void insertion(struct node **first_node, int key)
{
    struct node *new_node = new node;
    if ((*first_node) == nullptr)
    {
        std::cout << "new node" << std::endl;
        new_node->key = key;
        new_node->next_node = nullptr;
        *first_node = new_node;
        std::cout << "end new node" << std::endl;
    }
    else
    {
        new_node->key = key;
        new_node->next_node = (*first_node);
        (*first_node) = new_node;
    }
}

void display(node *first_node)
{
    std::cout << "printing list:" << std::endl;
    while (first_node != nullptr)
    {
        std::cout << first_node->key << std::endl;
        first_node = first_node->next_node;
    }
}

int main()
{
    node *first_node = nullptr;
    insertion(&first_node, 1);
    insertion(&first_node, 2);
    insertion(&first_node, 3);
    deletion(&first_node);
    display(first_node);
    node **temp = search(first_node, 2);
    display(*temp);
    return 0;
}