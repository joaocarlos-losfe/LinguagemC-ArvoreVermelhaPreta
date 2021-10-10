#include "rbt_node.h"

RBTNode rbtNodeCreate(int key)
{
	RBTNode new_node = malloc(sizeof(struct RBTNode));
	
	new_node->key = key;
	new_node->color = RED;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->dad_node = NULL;
	
	
	return new_node;
}

bool rbtNodeIsLeaf(RBTNode node)
{
	if(node->left == NULL && node->right == NULL)
		return true;
	
	return false;
}

void rbtNodePrint(RBTNode node)
{
	printf("%d", node->key);
}