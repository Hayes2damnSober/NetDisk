#ifndef _func_H_
#define _func_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <dirent.h>
#include <errno.h>
#include <pwd.h>
#include <grp.h>
#include <time.h>
#include <sys/time.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <sys/select.h>
#include <sys/wait.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <signal.h>
#include <pthread.h>
#include <arpa/inet.h>
#include <sys/epoll.h>
#include <netdb.h>
#include <string.h>
#include <netinet/in.h>
#include <sys/sendfile.h>


typedef __sighandler_t sighandler_t;

#define ARGS_CHECK(argc, n){ \
       if(argc != n){ \
       fprintf(stderr, "argc error: expected %d argument\n",n); \
       exit(1);	\
       } \
}

#define ERROR_CHECK(retVal,val,msg){ \
	if (retVal == val){ \
		perror(msg); \
		exit(1); \
	} \
}

#define THREAD_ERROR_CHECK(err, msg) \
do { \
	if(err != 0){ \
		fprintf(stderr, "%s: %s\n", msg, strerror(err)); \
			} \
	}while (0)
				

#define SIZE(a) (sizeof(a)/ sizeof(a[0]))

#endif
