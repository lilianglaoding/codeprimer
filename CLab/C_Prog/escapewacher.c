#include <stdio.h>
#include <stdlib.h>

// return distance when not escaped, otherwise return least time
unsigned int WatcherEscape(unsigned int magic, unsigned int distance, unsigned int time)
{
    unsigned int curr_distance = distance;
    unsigned int curr_time_left = time;
    unsigned int max_time_recovery;
    while (curr_time > 0)
    {
	if (curr_distance <= 0)
	    break;
	else
	{
	    if (magic >= 10)
	    {
		curr_distance -= 60;
		magic -= 10;
		curr_time_left--;
	    }
	    else
	    {
		max_time_recovery = ((20 - magic) % 4 == 0) ? ((20 - magic) / 4) : ((20 - magic) / 4 + 1);
		
		if (max_time_recovery > curr_time_left)
		{
		    running;
		}
		else
		{
		    curr_distance -= 120;
		    curr_time_left -= max_time_recovery;
		    magic -= 20;
		}
		
		if (curr_time >= 7)
		{
		    if (curr_distance >= 120)
		    {
			curr_time -= 7;
			curr_distance -= 120;
			magic -= 20;
		    }
		}
		else
		{
		    curr_distance -= 17;
		    curr_time--;
		}
	    }
	}
    }
}
