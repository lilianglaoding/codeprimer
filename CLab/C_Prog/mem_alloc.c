#include <stdio.h>
#include <stdlib.h>

#define MEM_BLK_SIZE 16
#define MAX_BLK_SIZE 256

struct mem_pool_info
{
    char *mem_pool_addr;
    int is_blk_used[MAX_BLK_SIZE];
    size_t pool_blk_num;
};

struct mem_blk_info
{
    char *mem_blk_addr;
    size_t allocated_blk_num;
};

struct mem_pool_info g_mem_pool_info;
struct mem_blk_info g_mem_blk_info[MAX_BLK_SIZE];

void *InitMemPool(size_t user_pool_size)
{
    if (user_pool_size % MEM_BLK_SIZE != 0)
        return NULL;

    g_mem_pool_info.mem_pool_addr = (char *)malloc(user_pool_size);
    g_mem_pool_info.pool_blk_num = user_pool_size / MAX_BLK_SIZE;
    int i = 0;
    while (i < g_mem_pool_info.pool_blk_num)
    {
        g_mem_pool_info.is_blk_used[i] = 0;
        i++;
    }
    return g_mem_pool_info.mem_pool_addr;
}

void DestroyMemPool(void)
{
    if (g_mem_pool_info.mem_pool_addr == NULL)
        return ;

    free(g_mem_pool_info.mem_pool_addr);
    g_mem_pool_info.mem_pool_addr = NULL;

    int i = 0;
    while (i < g_mem_pool_info.pool_blk_num)
    {
        g_mem_pool_info.is_blk_used[i] = 0;
        i++;
    }
    g_mem_pool_info.pool_blk_num = 0;
}

void *MemAlloc(size_t user_blk_size)
{
    if (user_blk_size % MEM_BLK_SIZE)
        return NULL;

    unsigned int last_mem_blk_len;
    unsigned int current_mem_blk_len;
    last_mem_blk_len = g_mem_pool_info.pool_blk_num + 1;
    current_mem_blk_len = 0;
    int mem_blk_seq = -1;
    while (i < g_mem_pool_info.pool_blk_num)
    {
        if (g_mem_pool_info.is_blk_used[i] == 0)
        {
            j = i;
            while (j < g_mem_pool_info.pool_blk_num && g_mem_pool_info.is_blk_used[j] == 0)
            {
                current_mem_blk_len++;
                j++;
            }
            if (current_mem_blk_len < last_mem_blk_len)
            {
                if (current_mem_blk_len >= g_mem_pool_info.pool_blk_num)
                {
                    last_mem_blk_len = current_mem_blk_len;
                    mem_blk_seq = i;
                }
                else
                    i = i + current_mem_blk_len;
            }
            else
                i = i + current_mem_blk_len;
        }
        else
            i++;
    }
}

int MemFree(void *mem_addr)
{
    
}









