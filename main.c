#include <stdio.h>
#include <stdlib.h>

#include "rbt.h"

int main()
{

	RBT tree;

	tree = rbtStart();

	tree->root_node = rbtInsert(tree->root_node, 5);
	tree->root_node = rbtInsert(tree->root_node, 1);
	tree->root_node = rbtInsert(tree->root_node, 6);
	tree->root_node = rbtInsert(tree->root_node, 2);
	tree->root_node = rbtInsert(tree->root_node, 3);


	rbtPrint(tree->root_node);

	if(rbtNodeSearch(tree->root_node, 4))
		printf("\nencontrado");
	else
		printf("\nnao encontrado");
	
	if(rbtRemove(&tree->root_node, 0))
		printf("\nno removido");
	else
		printf("\n no nao encontrado para remocao\n");
	
	
	rbtPrint(tree->root_node);

	printf("\ncompilado com sucesso...");

	return 0;
}
