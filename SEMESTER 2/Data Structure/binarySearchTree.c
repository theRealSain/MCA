#include <stdio.h>
#include <stdlib.h>

typedef struct node 
{
    int data;
    struct node* left;
    struct node* right;
} NODE;

NODE* insertNode(NODE* root, int data) 
{
    if (root == NULL) 
    {
        NODE* newNode = (NODE*)malloc(sizeof(NODE));
        newNode->data = data;
        newNode->left = NULL;
        newNode->right = NULL;
        return newNode;
    }
    if (data < root->data) 
    {
        root->left = insertNode(root->left, data);
    } 
    else if (data > root->data) 
    {
        root->right = insertNode(root->right, data);
    }    
    return root;
}

void inorderTraversal(NODE* node) 
{
    if (node == NULL)
        return;
    inorderTraversal(node->left);
    printf("%d ", node->data);
    inorderTraversal(node->right);
}

void preorderTraversal(NODE* node) 
{
    if (node == NULL)
        return;
    printf("%d ", node->data);
    preorderTraversal(node->left);
    preorderTraversal(node->right);
}

void postorderTraversal(NODE* node) 
{
    if (node == NULL)
        return;
    postorderTraversal(node->left);
    postorderTraversal(node->right);
    printf("%d ", node->data);
}

// Function to search for an element in the binary tree
int search(NODE* root, int data) 
{
    if (root == NULL)
        return 0;
    if (root->data == data)
        return 1;
    if (search(root->left, data) || search(root->right, data))
        return 1;
    return 0;
}

int main() 
{
    NODE* root = NULL;
    int ch, data;

    printf("Binary Search Tree Implementation\n\n");
    printf("1. Insert node\n");
    printf("2. Inorder traversal\n");
    printf("3. Preorder traversal\n");
    printf("4. Postorder traversal\n");
    printf("5. Search node\n");
    printf("6. Exit\n");

    do
    {
        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch) 
        {
            case 1:
            {
                printf("Enter data to insert: ");
                scanf("%d", &data);
                root = insertNode(root, data);
                printf("%d added to tree!\n", data);
                break;
            }
            case 2:
            {
                printf("Inorder traversal: ");
                inorderTraversal(root);
                printf("\n");
                break;
            }
            case 3:
            {
                printf("Preorder traversal: ");
                preorderTraversal(root);
                printf("\n");
                break;
            }
            case 4:
            {
                printf("Postorder traversal: ");
                postorderTraversal(root);
                printf("\n");
                break;
            }
            case 5:
            {
                printf("Enter data to search: ");
                scanf("%d", &data);
                if (search(root, data))
                    printf("%d found in tree!\n", data);
                else
                    printf("%d not found in tree.\n", data);
                break;
            }
            case 6:
            {
                printf("Exiting...!\n");
                exit(0);
                break;
            }

            default:
            {
                printf("Invalid!\n");
                break;
            }
        }
    }
    while(ch != 6);
    return 0;
}

