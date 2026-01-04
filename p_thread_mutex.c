#include <stdio.h>
#include <pthread.h>
pthread_mutex_t lock;  // Declare a mutex lock
int counter = 0;       // Shared resource
// Function to increment the counter
void* incrementCounter(void* arg) {
    pthread_mutex_lock(&lock);  // Lock the critical section
    counter++;
    printf("Counter: %d\n", counter);
    pthread_mutex_unlock(&lock);  // Unlock the critical section
    return NULL;
}
int main() {
    pthread_t thread1, thread2;

    // Initialize the mutex
    pthread_mutex_init(&lock, NULL);
    // Create two threads
    pthread_create(&thread1, NULL, incrementCounter, NULL);
    pthread_create(&thread2, NULL, incrementCounter, NULL);
    // Join the threads
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    // Destroy the mutex
    pthread_mutex_destroy(&lock);
    return 0;
}

