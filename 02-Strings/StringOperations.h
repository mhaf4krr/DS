#include<stdio.h>
int length(char *String)
{
    int length=0;
    int i=0;
    while(String[i]!=0)
    {
        length++;
        i++;
    }
    return length;
}

void UpperCase(char *String)
{
    int i=0;
    while(String[i]!='\0')
    {
        if(String[i]>='a'&& String[i]<='z')
        {
            String[i]=String[i]-32;
        }
        i++;
    }
}

void LowerCase(char *String)
{
    int i=0;
    while(String[i]!='\0')
    {
        if(String[i]>='A'&& String[i]<='Z')
        {
            String[i]=String[i]+32;
        }
        i++;
    }
}


void Append(char* source, char* destination)
{
    int len=length(destination);
    int i=0;
    while(source[i]!='\0')
    {
        destination[len]=source[i];
        len++;
        i++;
    }
}

void Compare(char* string1,char *string2)
{
    if(length(string1)!=length(string2))
    {
        printf("\nStrings are not SAME!\n");
        return;
    }

    int i=0;
    while(i!=length(string1))
    {
        if(string1[i]!=string2[i])
        {
         printf("\nStrings are not SAME!\n");
         return;
        }
        i++;
    }

    printf("\nStrings are SAME!\n");
}

void Reverse(char *String)
{
    int i=0;
    int j=length(String)-1;
  //here length contains null character also and we dont want to disturb the null character
    while(j>i)
    {
        char temp=String[i];
        String[i]=String[j];
        String[j]=temp;
        printf("\nLoop %d",i+1);
        i++;
        j--;
    }
}



