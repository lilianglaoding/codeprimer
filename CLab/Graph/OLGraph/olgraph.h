#ifndef OLGRAPH_H
#define OLGRAPH_H

#define MAXVERTEXNUM 100

typedef char VertexType;
typedef int EdgeType;
typedef int InfoType;
typedef struct ArcBox
{
  int tailvex, headvex;
  InfoType info;
  ArcBox *hlink, *tlink;
} ArcBox;

typedef struct VexNode
{
  VertexType vertex;
  ArcBox *firstin, *firstout;
} VexNode;

typedef struct
{
  VexNode xlist[MAXVERTEXNUM];
  int vexnum, arcnum;
} OLGraph;

#endif
