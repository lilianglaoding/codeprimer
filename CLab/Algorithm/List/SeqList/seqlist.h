#ifndef SEQLIST_H
#define SEQLIST_H

#define MAXSIZE 256

typedef int datatype;

typedef struct
{
  datatype data[MAXSIZE];
  int last;
} SeqList;

#endif
