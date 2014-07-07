#ifndef TREESAVE_H
#define TREESAVE_H

#define MAXNODE 1024

typedef int datatype;

typedef struct
{
  datatype data;
  int parent;
} NodeType;

#define MAXSON 255

typedef struct TreeNode
{
  datatype data;
  struct TreeNode *son[MAXSON];
} NodeType;

struct ChildNode
{
  int childnode;
  struct ChildNode *nextchild;
}

typedef struct
{
  datatype data;
  struct ChildNode *firstchild;
} NodeType;

typedef struct
{
  datatype data;
  int parent;
  struct ChildNode *firstchild;
}

typedef struct TreeNode
{
  datatype data;
  struct TreeNode *lchild;
  struct TreeNode *nextsibling;
} NodeType, *CSTree;

#endif
