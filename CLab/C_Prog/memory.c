#include <stdio.h>
#include <stdlib.h>

#define MEM_BLK_SIZE 16

typedef struct node
{
    void *ptr;
    struct node *next;
    size_t size;
    int free;
} NodeType;

void *pool_addr = NULL;
NodeType *pool_head = NULL;

void create()
{
    pool_head = (NodeType *)malloc(sizeof(NodeType));
    pool_head->next = NULL;
}

void *InitMemPool(size_t mem_pool_size)
{
    if (mem_pool_size % MEM_BLK_SIZE == 0)
    {
	NodeType *s;
	pool_addr = (void *)malloc(sizeof(mem_pool_size));
	if (pool_addr)
	{
	    create();
	    s = (NodeType *)malloc(sizeof(NodeType));
	    s->ptr = pool_addr;
	    s->next = pool_head->next;
	    s->size = mem_pool_size;
	    s->free = 1;
	    pool_head->next = s;
	    return pool_addr;
	}
    }
    return NULL;
}

void DestroyMemPool(void)
{
    free(pool_addr);
    pool_addr = NULL;
}

void *MemAlloc(size_t user_blk_size)
{
    if (pool_addr && user_blk % )
}

int MemFree(void *mem_addr)
{
    
}
