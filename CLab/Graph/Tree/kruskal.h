#define MAXEDGE 255

typedef int datatype;

typedef struct
{
  datatype v1;
  datatype v2;
  int cost;
} EdgeType;

EdgeType edges[MAXEDGE];
