#define KEYNUM 8
#define RADIX 10
#define MAXSPACE 1000

typedef struct
{
  KeyType keys[KEYNUM];
  InfoType Typeotheritems;
  int next;
} NodeType;

typedef struct
{
  int f;
  int e;
} QNOde;

typedef QNode Queue[RADIX];
