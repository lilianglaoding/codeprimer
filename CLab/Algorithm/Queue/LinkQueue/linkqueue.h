typedef int datatype;

typedef struct node
{
  datatype data;
  struct node *next;
} QNode;

typedef struct
{
  QNode *front, *rear;
} LQueue;
