
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int Dealwith_Order(char primary[300])
{
    char *p;
    p=primary;
    int flag=1;
    while(*p!='\0')
    {
        char current[20];
        memset(current, '\0', 20);
        int i=0;
        while(*p!=' '&&*p!='\0')
        {
            current[i++]=*p++;
        }
        if(strcmp(current,"asc")==0)
        {
            flag++;
        }
        else if(strcmp(current,"desc")==0)
        {
            flag++;
        }
        else
        {
            flag=0;
        }
        if(flag>1) return 0;
        if(*p=='\0') return 1;
        else p++;
    }
    return 1;
}

int main()
{
    int text1=0,text2=0,text3=0;
    text1=Dealwith_Order("we hh asc afasf asc");
    text2=Dealwith_Order("rgrgrg desc asc");
    text3=Dealwith_Order("asc ahsdas saf");
    printf("%d %d %d",text1,text2,text3);

}
