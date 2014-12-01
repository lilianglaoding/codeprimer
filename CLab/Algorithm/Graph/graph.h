#define MAXVERTEXNUM 100

typedef char VertexType;
typedef int EdgeType;

typedef struct
{
    VertexType vexs[MAXVERTEXNUM];
    EdgeType edges[MAXVERTEXNUM][MAXVERTEXNUM];
    int n, e;
    int visited[n];
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
    int visited[n];
} ALGraph;

typedef int InfoType;

typedef struct ArcBox
{
    int tailvex, headvex;
    struct ArcBox *hlink, *tlink;
    InfoType info;
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


typedef enum {unvisited, visited} VisitIf;

typedef struct EBox
{
    VisitIf mark;
    int ivex, jvex;
    struct EBox ilink, jlink;
    InfoType info;
} EBox;

typedef struct VexBox
{
    VertexType data;
    EBox firstedge;
} VexBox;

typedef struct
{
    VerBox adjmulist[MAXVERTEXNUM];
    int vexnum, edgenum;
} AMLGraph;
