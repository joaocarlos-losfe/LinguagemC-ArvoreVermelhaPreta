#ifndef _RBTN_H_
#define _RBTN_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct RBTNode * RBTNode;

#define RED 1

#define BLACK 0

struct RBTNode
{
    int key;
    int color;
   	RBTNode left;
   	RBTNode right;
   	RBTNode dad_node; 
};

RBTNode rbtNodeCreate(int key);
bool rbtNodeIsLeaf(RBTNode node);
void rbtNodePrint(RBTNode node);


#endif