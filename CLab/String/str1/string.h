#ifndef STRING_H
#define STRING_H

#define SMAX 255

char store[SMAX + 1];

int free;

typedef struct
{
  int length;
  int stradd;
} HString;

#endif
