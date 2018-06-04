#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char str[50],command[150]="";
    char *token;
    char *token2;
    int i=1;
    FILE *fp;
    char l[50];
    char stre[50];
    while(i!=0)
    {
    printf("Please Enter the dos commands which you want...\nFor exit enter (0).\n");
    fgets (str, 50, stdin);
    if(str[0]=='0')
    {
    printf("The Program has been closed");
    i=0;
    }
    else
    {
    strcpy(stre,str);
    token=strtok(str," ");

            if((fp = fopen("dos","r"))==NULL)
            {
                printf("There are no commands on the text fil..\n");
            }
            else
            {
                while (fgets(l,50,fp) !=NULL)
                {
                    if((strstr(l,token))!=NULL)
                    {
                        token2 =strtok(l,"=");
                        strcpy(command,token2);
                        strcat(command," ");
                        //strcat(command, " ");

                        break;
                    }
                }
                token=strtok(stre," ");
                token = strtok(NULL," ");
            }
        while(token!=NULL)
        {
            strcat(command, token);
            strcat(command, " ");
            token = strtok(NULL," ");
        }

    //system(command);
    printf(command);
    }}
    return 0;
}
