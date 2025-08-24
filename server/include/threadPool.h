#ifndef _THREAD_POOL_H_
#define _THREAD_POOL_H_
#include <pthread.h>
#include "taskQueue.h"

#define THREADNUM 8

typedef struct threadpool_s {
	pthread_t * threads;	
	int threadNumber;
	taskqueue_t queue;
}threadpool_t;

//初始化线程池
threadpool_t* thread_pool_init();
//向线程池添加任务
int thread_pool_add_task();
//销毁线程池
void thread_pool_destroy();




#endif
