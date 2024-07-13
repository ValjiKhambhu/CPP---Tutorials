#include <iostream>

using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createnode(int data)
{
    struct node *n;

    n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;

    return n;
};

struct node *insert(struct node *root,int key)
{
    struct node  *pre=NULL;
    while(root!=NULL)
    {
        pre=root;
        if(key==root->data)
        {
            printf("\n element is present is not insert ");
            return ;
        }
        else if(key<root->data)
        {
            return root->left;
        }
        else{
            return root->right;
        }
    }

    struct node *no=createnode(key);

    if(key<pre->data)
    {
         pre->left=no;
    }
    else{
         pre->right=no;
    }
};

int main()
{
    struct node *p=createnode(5);
    struct node *p1=createnode(4);
    struct node *p2=createnode(6);
    struct node *p3=createnode(3);
    struct node *p4=createnode(2);

    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p2->right=p4;

    insert(p,7);
    printf("%d",p->right->right->data);
    return 0;
}