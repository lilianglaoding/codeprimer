#ifndef SEQLIST_H
#define SEQLIST_H
#define MAXSIZE 20

typedef struct
{
  int data[MAXSIZE];
  size_t last;
}SeqList;

#endif
