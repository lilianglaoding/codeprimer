typedef int datatype;

#define MAXSIZE 256

typedef struct
{
  datatype data[MAXSIZE];
  int front, rear;
} SeQueue;
