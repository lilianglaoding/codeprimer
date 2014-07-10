#ifndef AMLGRAPH_H
#define AMLGRAPH_H

#define MAXVERTEXNUM 100

typedef char VertexType;
typedef int EdgeType;
typedef int InfoType;
typedef int VisitIf;

typedef struct EBox
{
  VisitIf mark;
  int ivex, jvex;
  struct EBox *ilink, *jlink;
  InfoType info;
} EBox;

typedef struct VexBox
{
  VertexType vertex;
  EBox *firstedge;
} VexBox;

typedef struct
{
  VexBox adjmulist[MAXVERTEXNUM];
  int vexnum, edgenum;
} AMLGraph;

#endif
