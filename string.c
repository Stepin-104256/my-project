#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="hello_i_am_ruchitha";
    printf("first string:%s \n",str);
    char *brokenstr=strtok(str,"_");
    while(brokenstr!=NULL)
    {
        printf("%s\n",brokenstr);
        brokenstr=strtok(NULL,"_");
    }
    return 0;





}


