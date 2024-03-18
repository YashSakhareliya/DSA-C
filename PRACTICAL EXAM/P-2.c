#include<stdio.h>
#include<stdlib.h>

struct Interval
{
    int start;
    int end;
};

int compareInterval(const void *a,const void *b)
{
    return ((struct Interval*)a)->start - ((struct Interval *)b)->start;
}
void margedintervel(int n,struct Interval intervals[])
{
    if(n<=0)
    return;

    qsort(intervals,n,sizeof(struct Interval),compareInterval);

    struct Interval stack[n];
    int top = -1;

    stack[++top] = intervals[0];

    for(int i = 0; i<n;i++)
    {
        struct Interval topInterval = stack[top];

        if(intervals[i].start<=topInterval.end)
        {
            topInterval.end = (topInterval.end > intervals[i].end) ? topInterval.end : intervals[i].end;
            stack[top] = topInterval;
        }
        else
        {
            stack[++top] = intervals[i];
        }
    }

    for (int i = 0; i <= top; i++) 
    {
        printf("[%d, %d] ", stack[i].start, stack[i].end);
    }

}

int main()
{
    struct Interval interval[] = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};

    int n = sizeof(interval)/sizeof(interval[0]);

    printf("Marged time :- ");
    margedintervel(n,interval);

}