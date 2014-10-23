#define KEYNUM 8
#define RADIX 10
#define MAXSPACE 1000

typedef int KeyType;
typedef int InfoType;
typedef struct
{
    KeyType keys[KEYNUM];
    InfoType otheritems;
    int next;
} NodeType;

typedef struct
{
    int f;
    int e;
} Q_Node;

typedef QNode Queue[RADIX];
