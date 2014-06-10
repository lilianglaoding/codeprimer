/*----------------------源代码开始--------------------------------------------*/ 
#include <stdio.h> 
#include <stdlib.h> 
#include <errno.h> 
#include <string.h> 
#include <sys/types.h> 
#include <netinet/in.h> 
#include <sys/socket.h> 
#include <sys/wait.h> 
/********************************************************************* 
*filename: cycletcpserver.c 
*purpose: 循环tcp服务端程序 
*tidied by: zhoulifa(zhoulifa@163.com) 周立发(http://zhoulifa.bokee.com) 
Linux爱好者 Linux知识传播者 SOHO族 开发者 最擅长C语言 
*date time:2006-07-04 22:00:00 
*Note: 任何人可以任意复制代码并运用这些文档，当然包括你的商业用途 
* 但请遵循GPL 
*Thanks to: Google.com 
*********************************************************************/ 
int main(int argc, char ** argv) 
{ 
    int sockfd,new_fd; /* 监听socket: sock_fd,数据传输socket: new_fd */ 
    struct sockaddr_in my_addr; /* 本机地址信息 */ 
    struct sockaddr_in their_addr; /* 客户地址信息 */ 
    unsigned int sin_size, myport, lisnum; 

    if(argv[1])  myport = atoi(argv[1]); 
    else myport = 7838; 

    if(argv[2])  lisnum = atoi(argv[2]); 
    else lisnum = 2; 

    if ((sockfd = socket(PF_INET, SOCK_STREAM, 0)) == -1) { 
        perror("socket"); 
        exit(1); 
    } 
    my_addr.sin_family=PF_INET; 
    my_addr.sin_port=htons(myport); 
    my_addr.sin_addr.s_addr = INADDR_ANY; 
    bzero(&(my_addr.sin_zero), 0); 
    if (bind(sockfd, (struct sockaddr *)&my_addr, sizeof(struct sockaddr)) == -1) { 
        perror("bind"); 
        exit(1); 
    } 

    if (listen(sockfd, lisnum) == -1) { 
        perror("listen"); 
        exit(1); 
    } 
    while(1) { 
        sin_size = sizeof(struct sockaddr_in); 
        if ((new_fd = accept(sockfd, (struct sockaddr *)&their_addr, &sin_size)) == -1) { 
            perror("accept"); 
            continue; 
        } 
        printf("server: got connection from %s\n",inet_ntoa(their_addr.sin_addr)); 
        if (!fork()) { /* 子进程代码段 */ 
            if (send(new_fd, "Hello, world!\n", 14, 0) == -1) { 
                perror("send"); 
                close(new_fd); 
                exit(0); 
            } 
        } 
        close(new_fd); /*父进程不再需要该socket*/ 
        waitpid(-1,NULL,WNOHANG);/*等待子进程结束，清除子进程所占用资源*/ 
    } 
} 
/*----------------------源代码结束--------------------------------------------*/ 
