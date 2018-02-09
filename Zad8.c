#include <stdlib.h>

int por (const void *a, const void *b)
{
	return (*(int*)a-*(int*)b);
}

void funk (int a[],int n)
{
	qsort(a,n,sizeof(int),por);
}
