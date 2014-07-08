#ifndef MGRAPH_H
#define MGRAPH_H

#define MAXVERTEXNUM 100

typedef char VertexType;
typedef int EdgeType;

typedef struct
{
  VertexType vexs[MAXVERTEXNUM];
  EdgeType edges[MAXVERTEXNUM][MAXVERTEXNUM];
  int n, e;
} MGraph;

#endif
