typedef enum {ATOM, LIST} Elemtag;

typedef struct GLNode
{
  Elemtag tag;
  union
  {
    int data;
    struct 
    {
      struct GLNode *hp, *tp;
    } ptr;
  };
} *GList;

/*********************************

typedef enum {ATOM, LIST} Elemtag;

typedef struct GLNode
{
  Elemtag tag;
  union
  {
    int data;
    struct GLNode *hp;
  };
  struct GLNode *tp;
} *EGList;

*********************************/

