#include <stdio.h>
#include <stdlib.h>

/* A binary tree node has data, pointer to left child 
and a pointer to right child */
struct node
{
	int data;
	struct node *left;
	struct node *right;
};


struct node *newNode(int data)
{
	struct node *node = (struct node *)
		malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;

	return (node);
}


/*number of node= root of  the tree + number of node in left sub tree + number of tree in right sub tree
  number_node   =   1               +  num_node(p->left)              + num_node(p->right)  
               =   0    if tree is  empty i.e if(p==NULL)*/       
int num_node(struct node*p)
{


    if(p==NULL)
      return 0;
    
    return(1+num_node(p->left)+num_node(p->right));
    

}


/*number_leaves   =   return 1       if it is leaf i.e if(p->left == NULL and p->right == NULL)  
                  =   return(number of leaves in left sub tree + number of leaves in left sub tree) */
int num_leaves(struct node*p)
{
    if(p==NULL)
       return 0;

    else if(p->left == NULL && p->right == NULL)
      return 1;
    
    else 
       return(num_leaves(p->left)+num_leaves(p->right));
    

}

/*number_nonleaves   =   return 0       if it is leaf i.e if(p->left == NULL and p->right == NULL)  
                     =   return(1+number of non leaves in left sub tree + number of non leaves in left sub tree) */
int num_non_leaf(struct node*p)
{


    if(p==NULL)
      return 0;
    
    else if(p->left == NULL && p->right == NULL)
      return 0;
    
    return(1+num_non_leaf(p->left)+num_non_leaf(p->right));
    

}

//height of the tree 
//height of the leaf = 0

int height(struct node*p)
{
    

    if(p==NULL)
      return 0;
    
    else if(p->left == NULL && p->right == NULL)
      return 0;
    
    int height_leftsubtree=height(p->left);
    int height_rightsubtree=height(p->right);
    

    return(1+ ((height_leftsubtree>height_rightsubtree) ? height_leftsubtree : height_rightsubtree));
    

}


int num_fullnode(struct node*p)
{


    if(p==NULL)
      return 0;
    
    else if(p->left == NULL && p->right == NULL)
      return 0;
    
    return(num_fullnode(p->left)+num_fullnode(p->right)+ ((p->left && p->right) ? 1 : 0));
    

}



/* Driver program to test above functions*/
int main()
{
	struct node *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
    root->right->left = newNode(6);
	root->right->right = newNode(7);
    root->left->left->left = newNode(8);
    root->left->left->right = newNode(9);

    int numofnode=num_node(root);
    int numofleaves=num_leaves(root);
    int numofnonleaves=num_non_leaf(root);
    int numfullnode=num_fullnode(root);
    int heightoftree=height(root);
    
    printf("num of node == %d\n",numofnode);
    printf("num of leaves == %d\n",numofleaves);
    printf("num of nonleaves == %d\n",numofnonleaves);
    // printf("num of nonleaves == %d\n",(num_node(root)-num_leaves(root)));
    printf("num of numfullnode == %d\n",numfullnode);
    printf("height of tree == %d\n",height(root));
	getchar();
	return 0;
}
