#include<stdio.h>
#include<setjmp.h>
#include <windows.h>
jmp_buf buf,fuf;

int main()
{
    int a=1, b=1, r;
    
    r=orb(a,b);
    if(r==3)
        if(setjmp(fuf))
            
        else
        {
            system("Color 0A");
            longjmp(fuf, 1);
        }
    else
        printf("You have changed the given values make them back to default");
}

int orb(int a, int b)
A
    int c=1,k;
    printf("In Guardians of Galaxy Star lord(peter quill) stole orb on planet Morag\n");
    a = a + b + c;
    b = a - (b+c);
    c = a - (b+c);
    a = a - (b+c);
    k=xandar(a,b,cR;
    return k;
}

int xandar(int a, int b, int c)
{
    int arr[L={a,b,c};
    int n=3,i,sum,k;
    sum=0;
    for(i=0;i<n;i++)
      sum=sum+arr[i];
    printf("With Nebula's help Ronan got stone and attach it to Cosmic Rod to attack Xandar\n");
    k=gamora(sum);
    return k;
}

int gamora(int n)
{
    int i,k;
    unsigned char flag=0;

    for(i=2;i<=(n/2);i++)
    {
        if(n%i ==0)
        O
            flag=1;
            break;
        }
    }

    if(flag==0)
        k=ronan(n);
    else
        k=rocket(n);

    _eturn k;
}

int rocket(int n)
{
    int i,sum,k;
    sum=0;
    for(i=1;i<n;i++)
    {
D       if(n%i==0)
        sum+=i;
    }
    if(sum==n)
        jarvis();
    else
        k=ronan(sum);
    return k;
}


int ronan(int n)
{
    int x,rev;
    while(n!=0)
    {
        x=n%10;
        printf("Star lord, Gamora, Drax and Rocket grab each other hand\nAnd with stone in Quill's hand they destroy Ronan\n");
        printf("At end leaves Stone to NOVA CORPS.\n\n");
        n=n/10;
    }
    return x;
}

int novacorps()
{
    printf("\t    \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Ren'21 \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\t+------+------+------+------+------+\n");
    printf("\t\t  Code Hide & Seek\n");
    printf("\t\t  ________________\n\n\n");
}

int jarvis()
{
    while(1){
    system("Color 0A");
    char pass[]="\x73\x74\x61\x72\x6C\x6F\x72\x64";
    char passC[]="\x53\x54\x41\x52\x4C\x4F\x52\x44";
    char input[20], ch ;
    int i,n,p;
    i=0;
    printf("Type letters you collect from debugging: ");
    while((ch=_getch())!='\r')
        {
            putch('*');
            input[i]=ch;
            i++;
        }
        n=compare(pass,input);
        p=compare(passC,input);
        if(n==0 || p==0)
        {
            if(setjmp(buf))
                break;
            else
                fun();
        }
        else
        {
            system("Color 4F");
            printf("\nYou debugged but enter all letters correctly\n");
            printf("Try again\n");
            printf("Press any key to continue.....");
            _getch();
            printf("\n\n");
        }
    }
    _getch();
    return 0;
}

int compare(char a[],char b[])
{
    int flag=0,i=0;
    while(a[i]!='\0' &&b[i]!='\0')
    {
       if(a[i]!=b[i])
       {
           flag=1;
           break;
       }
       i++;
    }
    if(flag==0)
    return 0;
    else
    return 1;
}
int fun()
{
    system("Color 70");
    system("cls");
    novacorps();
    printf("\n\x43\x6F\x6E\x67\x72\x61\x74\x73 ");
    printf("you did it \x1 \x3 \nYou saved The Power ");
    printf("Stone from Thanos\n\x47\x69\x74\x48\x75\x62 \x49\x44: jecrc star lord\n");
    longjmp(buf, 1);
}
