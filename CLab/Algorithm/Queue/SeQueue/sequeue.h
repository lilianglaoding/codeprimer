typedef int datatype;

#define MAXSIZE 256

typedef struct
{
  datatype data[MAXSIZE];
  int num;
  int front, rear;
} SeQueue;
