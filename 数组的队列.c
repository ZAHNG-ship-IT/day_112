#include <stdio.h>
#include <stdbool.h>

typedef struct Queue
{
    int *  pBase;
    int front;
    int rear;

}QUEUE;
void init(QUEUE *);
bool en_queue(QUEUE* pQ,int val);//入队
bool full_queue(QUEUE *);
int main()
{
    QUEUE Q;
    init(&Q);





}
void init(QUEUE *pQ)
{
    pQ -> pBase = (int *)malloc(sizeof(int) * 6);
    pQ ->front = 0;
    pQ ->rear = 0;
}

bool en_queue(QUEUE* pQ,int val)
{
    if(full_queue(pQ))
    {
        return false;
    }
    else
    {
        pQ ->pBase[pQ->rear] = val;
        pQ ->rear = (pQ ->rear + 1) % 6;

        return true;
    }

}

bool full_queue(QUEUE *pQ)
{
    // if((pQ->rear + 1)% 6 == pQ ->front)
    // {
    //     return true;
    // }
    // else
    // {
    //     return false;
    // }
    return (pQ->rear + 1)% 6 == pQ ->front;



}
