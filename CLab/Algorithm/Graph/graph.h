#define MAXVERTEXNUM 100

typedef char VertexType;
typedef int EdgeType;

typedef struct
{
    VertexType vexs[MAXVERTEXNUM];
    EdgeType edges[MAXVERTEXNUM][MAXVERTEXNUM];
    int n, e;
} MGraph;


typedef struct node
{
    int adjvex;
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



