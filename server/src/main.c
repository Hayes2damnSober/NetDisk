#include <func.h>

int main(int  argc, char* argv[])
{
	//处理信号
	//创建父子进程
	//父进程：等待10号信号
	//子进程：实现线程池、连接客户端
	
	// ./ ip port processNum
	
	pid_t pid = fork();
	//1 父进程
	if(pid > 0) {
	}

	//2 子进程
	
	//2.1 线程池   
	
	//2.2 epoll监听
	
	//2.2.1 循环监听
	
	
	return 0;
}
