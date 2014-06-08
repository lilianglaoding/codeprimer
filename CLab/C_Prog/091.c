#include "head.h"
#include <time.h"

void main()
{
  time_t lt;
  lt = time(NULL);
  printf(ctime(<));
  printf(asctime(localtime(<)));
  printf(asctime(gmtime(<)));
}
