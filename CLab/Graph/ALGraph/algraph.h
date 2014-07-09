#ifndef ALGRAPH_H
#define ALGRAPH_H

#define MAXVERTEXNUM 100

typedef char VertexType;
typedef int EdgeType;

typedef struct node
{
  VertexType adjvex;
  struct node *next;
} EdgeNode;

typedef struct vnode
{
  VertexType vertex;
  EdgeNode *firstedge;
} VertexNode;

typedef VertexNode AdjList[MAXVERTEXNUM];

typedef struct
{
  AdjList adjlist;
  int n, e;
} ALGraph;

#endif
