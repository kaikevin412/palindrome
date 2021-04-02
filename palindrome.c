#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(void)
{
int result;
char buf[1000],bufrev[1000];
while(scanf("%s",&buf) != EOF)
{
	strcpy(bufrev,buf);
    strrev(buf);
	result = strcmp(buf,bufrev);
	if(result == 0)
	{
	printf("yes \n");
	}
	else
	printf("no \n");
	memset(buf,'\0',1000);
    memset(bufrev,'\0',1000);
}
return 0;
}
