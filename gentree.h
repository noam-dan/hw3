#ifndef TREE_H
#define TREE_H

#include "defs.h"

typedef struct _tree* pTree;

typedef void* pNode;

typedef int (*GetKeyFunction)(pNode e);
typedef pNode (*CloneFunction)(pNode e);
typedef void (*PrintFunction)(pNode e);
typedef void (*DelFunction)(pNode e);

pTree TreeCreate(GetKeyFunction, CloneFunction, PrintFunction, DelFunction, int k);
void TreeDestroy(pTree);
int TreeNodesCount(pTree);
void TreePrint(pTree);
void TreePrint(pTree);
Result TreeAddLeaf(pTree, PELEMENT, int key);


#endif
