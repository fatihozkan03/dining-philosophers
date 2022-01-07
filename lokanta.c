#inctude <stdio.h>
#include <>stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#include <time.h> 

double priceTableOpen=99.90
double priceTableReorganize=19.90;
double priceRice=5;
#define riceTableAmount 2600
#define priorityLevelMax 5
#detfine thinkingTimeMax 2
#detine eatingTimeMax 2
#define eatingRiceQuantity 100
#define tableCount 16
#define tableChairCount 8


typedef struct Philosopher
{

int id;
int prioritylevel;
int thinkigTime;
int eatingTime;
int tableNumber;
int eatenRiceAmount;
int status;
pthread_t diningThread;
pthread_mutex_t lock;
int tabLenNumber;
int eatenRiceAmount;
int status; |
pthread_t diningThread;
pthread_mutex_t lock;
}
Philosopher;
typedef struct Table{
int id;
int riceAmount;
int eatenRiceAmount;
int reOrderAmount;
int chairCount; ð
int emptyChairCount;
int finishedCount;
int opened;
int * chairs;
double receipt;
pthread_mutex_t fullLock;
pthread_mutex_t finishLock;
pthread_mutex_t orderlock;
pthread_mutex_t eatlock;
}
Table;

Philosopher * philosopherList;
Table * tablelist;

int restaurantCapacity;

sem_t enterRestaurantLock;
pthread_mutex_t findTablelock;

pthread_mutex_t printReceiptLock;


