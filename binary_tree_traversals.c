#include<stdio.h>

typedef struct node
{
  int data;
  struct node *lchild;
  struct node *rchild;
} *NODE;

NODE
Create_Binary_Tree ()
{
  NODE temp;
  int ele;
  printf ("Enter the element to inserted (-1 for no data):");
  scanf ("%d", &ele);
  if (ele == -1)
    return NULL;
  temp = (NODE *) malloc (sizeof (struct node));
  temp->data = ele;
  printf ("Enter lchild child of %d:\n", ele);
  temp->lchild = Create_Binary_Tree ();
  printf ("Enter rchild child of %d:\n", ele);
  temp->rchild = Create_Binary_Tree ();
  return temp;
}

void inorder (NODE ptr)
{
  if (ptr != NULL)
    {
      inorder (ptr->lchild);
      printf ("%5d", ptr->data);
      inorder (ptr->rchild);
    }
}

void postorder (NODE ptr)
{
  if (ptr != NULL)
    {
      postorder (ptr->lchild);
      postorder (ptr->rchild);
      printf ("%5d", ptr->data);
    }
}

void preorder (NODE ptr)
{
  if (ptr != NULL)
    {
      printf ("%5d", ptr->data);
      preorder (ptr->lchild);
      preorder (ptr->rchild);
    }
}

int main ()
{
  printf ("Manoj M Mallya\n200905130\nSection : C2\nRoll no : 23\n\n");
  int n, ch, i;
  NODE *root;
  root = NULL;
  while (1)
    {
      printf ("********************Output********************\n\n");
      printf ("-----------Menu-----------\n");
      printf (" 1. Insert\n 2. All traversals\n 3. Exit\n");
      printf ("Enter your choice:");
      scanf ("%d", &ch);
      switch (ch)
	{
	case 1:
	  printf ("Enter node :\n");
	  root = Create_Binary_Tree ();
	  break;
	case 2:
	  printf ("\nInorder traversal:\n");
	  inorder (root);
	  printf ("\nPreorder traversal:\n");
	  preorder (root);
	  printf ("\nPostorder traversal:\n");
	  postorder (root);

	  printf ("\n\n*********************************************");
	  break;
	case 3:
	  exit (0);
	}
    }
  return 0;
}
