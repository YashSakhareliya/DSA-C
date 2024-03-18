#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int start;
    int end;
} Interval;

int compare(const void* a, const void* b) {
    return ((Interval*)a)->start - ((Interval*)b)->start;
}

Interval* mergeIntervals(Interval* intervals, int size, int* mergedSize) {
    if (size <= 1) {
        *mergedSize = size;
        return intervals;
    }
    qsort(intervals, size, sizeof(Interval), compare);

    Interval* result = (Interval*)malloc(size * sizeof(Interval));
    int count = 0;
    int i;
    result[count] = intervals[0];
    for (i = 1; i < size; i++) {
        if (intervals[i].start <= result[count].end) {
            if (intervals[i].end > result[count].end)
                result[count].end = intervals[i].end;
        } else {
            count++;
            result[count] = intervals[i];
        }
    }

    *mergedSize = count + 1;
    return result;
}

void printIntervals(Interval* intervals, int size) {
    for (int i = 0; i < size; i++) {
        printf("[%d, %d] ", intervals[i].start, intervals[i].end);
    }
    printf("\n");
}

int main() {
    int n,i;
    printf("enter the size of array\n");
    scanf("%d",&n);
    Interval intervals[n];
    printf("enter time intervales start and end");
    for(i=0;i<n;i++)
    scanf("%d%d",&intervals[i].start,&intervals[i].end);
    

    int mergedSize;
    Interval* mergedIntervals = mergeIntervals(intervals, n, &mergedSize);

    printf("Merged intervals: ");
    printIntervals(mergedIntervals, mergedSize);

    free(mergedIntervals);

    return 0;
}