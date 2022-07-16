#include <stdio.h>
#include <stdlib.h>
#define MAX 10

typedef struct node{
int key;
struct node *left, *right;
}* NODE;

typedef struct{
NODE S[MAX];
int tos;
}STACK;

NODE newNODE (int item){
NODE temp = (NODE)malloc(sizeof(struct node));
temp->key = item;
temp->left = temp->right = NULL;
return temp;
}

void push (STACK *s, NODE n){
s->S[++(s->tos)] = n;
}

NODE pop (STACK *s){
return s->S[(s->tos)--];
}

void inorder (NODE root){
NODE curr;
curr = root;
STACK S;
S.tos = -1;
push(&S, root);
curr = curr->left;
while (S.tos != -1 || curr != NULL){
while (curr != NULL){
push(&S, curr);
curr = curr->left;
}
curr = pop(&S);
printf("%d\t", curr->key);
curr = curr->right;
}
}

NODE insert (NODE node, int key){
if (node == NULL)
return newNODE(key);
if (key < node->key)
node->left = insert(node->left, key);
else if (key > node->key)
 node->right = insert(node->right, key);
 return node;
}

NODE minValueNode (NODE node){
NODE current = node;
while (current && current->left != NULL)
current = current->left;
return current;
}

NODE deleteNode (NODE root, int key){
if (root == NULL)
return root;
if (key < root->key)
root->left = deleteNode(root->left, key);
else if (key > root->key)
root->right = deleteNode(root->right, key);
else{
if (root->left == NULL){
NODE temp = root->right;
free(root);
return temp;
}
else if (root->right == NULL){
NODE temp = root->left;
free(root);
return temp;
}
NODE temp = minValueNode(root->right);
root->key = temp->key;
root->right = deleteNode(root->right, temp->key);
}
return root;
}

int main(){
NODE root = NULL;
int k;
printf("Enter the root:\t");
scanf("%d", &k);
root = insert(root, k);
int ch;
while(1){
printf("\n1. Insert\n2. Delete\n3. Display\n4. Exit:\n");
printf("Enter your choice : ");
scanf("%d", &ch);
switch (ch){
 case 1: printf("Enter element to be inserted : ");
 scanf("%d", &k);
 root = insert(root, k);
 break;
 case 2: printf("Enter element to be deleted : ");
 scanf("%d", &k);
 root = deleteNode(root, k);
 break;
 case 3: inorder(root);
 break;
 case 4: return 0;
}
}
}
