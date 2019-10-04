#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int key;
    char *value;
    int color;
    struct tree *left;
    struct tree *right;
    struct tree *parent;
} node;

typedef struct
{
	node *root;
	int n;
	int h;
} T;

node *create(int key, char *value)
{
    node *root = malloc(sizeof(node));
    if (root != NULL)
    {
	root->key = key;
	root->value = value;
	root->color = 1;
	root->left = NULL;
	root->right = NULL;
	root->parent = NULL;
    }
    return root;
}



int main()
{
    node *head = NULL;
    int key = 20;
    char *value = "foo";
    head = create(key, value);
    printf("Круто\n key = %d\tvalue = %s\n", head->key, head->value);
    free (head);
    return 0;
}
