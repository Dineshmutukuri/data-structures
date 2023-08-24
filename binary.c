#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* left;
    struct node* right;
};
struct node* createNode(value){
    struct node* newNode = malloc(sizeof(struct node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
struct node* createNode(value){
    struct node* newNode = malloc(sizeof(struct node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
 }
 struct node* insertRight(struct node *root, int value({
    root->right = createNode(value);
    return root->right;
}
int main(){
  struct node *root = createNode(1);
   insertLeft(root,2);
   insertRight(root,3);
    printf("The element of tree are %d %d %d %d", root->left->data,root->right->data0;
}
