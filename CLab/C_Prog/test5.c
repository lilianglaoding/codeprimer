#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    unsigned short int usarray[8] = {2, 1, 3, 1, 4, 1, 5, 1};
    unsigned int uitemp[4] = {0};
    memcpy((char *)uitemp, (char *)usarray, 16);
    int i = 0;
    for (i = 0; i < 8; i++)
        printf("%-8x: %-8d %-8x\n", &(usarray[i]), usarray[i], usarray[i]);
    printf("--------------------------------\n");
    
    for (i = 0; i < 4; i++)
        printf("%-8x: %-8d %-8x\n", &(uitemp[i]), uitemp[i], uitemp[i]);
    printf("\n");
    return 1;
}
