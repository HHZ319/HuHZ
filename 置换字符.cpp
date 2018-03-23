/*weh123?DfG*/
#include "stdio.h"
#include "string.h"
main()
{char str[20];/*="weDDh123?DfG";*/
int i;
/*scanf("%s",str);*/
gets(str);
i=0;
while(str[i]!='\0')
{if(str[i]=='D')
  str[i]='d';
i++;}
/*printf("%s",str);*/
puts(str);
}

