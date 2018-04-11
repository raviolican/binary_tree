#include "btree.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

struct btree {
	int root;
	int size;
};

struct btree_node {
	btree_node *l, *r;
	int value;
};

typedef  btree_node btree_node;

btree* btree_create() {
	btree * t = (btree*)malloc(sizeof(btree));
	t->root = '\0';
	t->size = 0;
	return t;
}






