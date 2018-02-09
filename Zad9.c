#include <stdio.h>
#include <string.h>

int main ()
{
	char a[32],b[32],c[32];
	fgets (a,32,stdin);
	fgets (c,32,stdin);
	strcpy (b,a);
	strcat (b,c);
	return 0;
}
