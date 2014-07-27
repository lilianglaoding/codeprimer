#ifndef TOPOSORT_H
#define TOPOSORT_H

typedef struct vnode
{
  int indegree;
  VertexType vertex;
  EdgeNode *firstedge;
} VertexNode;

#endif
