#include <stdio.h>
#include <pthread.h>
#include<unistd.h>

void*ThreadFunction(void *arg)
{
	int *id = (int*) arg;
	printf("ThreadID : %d\n",*id);
	return NULL;		
} 
 
int main() 
{
    pthread_t thread1 , thread2; // Khai bao bien thread => thread id 
    int id1=1 , id2=2; 
    
    pthread_create(&thread1,NULL, ThreadFunction , &id1);
    sleep(3); 
    pthread_create(&thread2,NULL, ThreadFunction , &id2);
    
    pthread_join(thread1,NULL); // truyen vao thread id va return value 
    pthread_join(thread2,NULL);
    printf("Thread complete\n");
    return 0;
}


