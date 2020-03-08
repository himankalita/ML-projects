/*S->w(C)bAe
O->p
C->iOn|iOi
A->L
L->i=E
E->i*n

w represents 'while' keyword
p represents conditional operators like '==','<=','=>','!='
b represents 'begin'
A represents the statements
e represents the end of the while loop
C represents a condition
i represents an identifier
n represents a constant
L represents an assignment
E represents an operation of an identifier and a constant*/


#include<stdio.h>
#include<string.h>
#include<ctype.h>

char input[20];
int i,error;
void S();
void O();
void C();
void A();
void E();
void L();

int main()
{
    i=0,error=0;
    printf("Enter expresion\n");
    gets(input);
    S();
    printf("%d",strlen(input));
    if(strlen(input)==i && error==0)
        {printf("\nAccepted..!!!\n");}
        else printf("\nRejected..!!!\n");


}

void S()
{
    if(input[i]=='w')
    {
        i++;
        if(input[i]=='(')
        {
            i++;
            C();
           if(input[i]==')')
            {
              i++;
                if(input[i]=='b')
                {
                   i++;
                   A();
                   if(input[i]=='e')
                    {
                        i++;
                    }
                    else error =1;

               }
          }

       }
    }
}

void O()
{
    if(input[i]=='=')
    {   i++;
        if(input[i]=='=')
        {  i++;
        }
        if(input[i]=='>')
        {
            i++;
        }
    if(input[i]=='!')
    {   i++;
        if(input[i]=='=')
            i++;
    }
    if(input[i]=='<')
    {  i++;
       if(input[i]=='=')
          i++;
    }


}}
void C()
{
    if(isalnum(input[i]))
     {
        i++;
        O();
    if(isdigit(input[i]))
        {
            if(input[i]/10>=0)
            {i++;}
        i++;}

    else if(isalnum(input[i]))
        i++;
     }

}

void A()
{
    L();
    //i++;
    if(input[i]==';')
    {
        i++;
        A();
    }

}

void L()
{
    if(isalnum(input[i]))
        i++;
    if(input[i]=='=')
        i++;
    E();
}
void E()
{
    if(isalnum(input[i]))
        i++;
    if(input[i]=='*')
        i++;
    if(isdigit(input[i]))
        {
            if(input[i]/10>=0)
            {i++;}
        i++;}

}
