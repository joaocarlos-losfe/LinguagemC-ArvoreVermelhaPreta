#ifndef _RBT_H_
#define _RBT_H_

#include "rbt_node.h"
#include <stdbool.h>

typedef struct RBT* RBT;

struct RBT
{
	RBTNode root_node;
	int count_leaf;
	int height;
};

RBT rbtStart();

RBTNode rotateToLeft(RBTNode node);
RBTNode rotateToRight(RBTNode node);

void changeColor(RBTNode node);
int getColor(RBTNode node);
RBTNode move2LeftRED(RBTNode node);
RBTNode move2RightRED(RBTNode node);
RBTNode searchMin(RBTNode node);
RBTNode balanceNode(RBTNode node);
RBTNode fixInsertion(RBTNode node);
RBTNode rbtInsert(RBTNode node, int key);
void rbtPrint(RBTNode root);

RBTNode rbtNodeSearch(RBTNode node, int key);
RBTNode rbtNodeRemove(RBTNode node, int key);
bool rbtRemove(RBTNode *node, int key);


#endif