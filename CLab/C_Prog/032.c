#include <stdio.h>
#include <conio.h>

void main()
{
    int corlor;
    for (corlor = 0; corlor < 8; corlor++)
    {
        textbackground(corlor);
        cprintf("This is corlor %d\r\n",corlor);
        cprintf("Press any key to continue\r\n");
        getch();
    }
}
