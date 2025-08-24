#ifndef _TASK_QUEUE_H_
#define _TASK_QUEUE_H_
#include <pthread.h>

typedef struct task_s {
	int peerfd;
	struct task_s* pNext;
} task_t;

typedef struct taskqueue_s {
	task_t* pFront;
	task_t* pRear;
	int queueSize;
	pthread_mutex_t mutex;
	pthread_cond_t cond;
} taskqueue_t;

int taskEnqueue();
int taskDequeue();
int taskEmpty();








#endif
