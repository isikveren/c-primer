#include<stdio.h>
#include<string.h>
#define N 3
int main()
{
    void f1(char *[], char (*)[10], int);
    //��************found***********
    //int f2(char *[], int);//�������
    int f2(char *[], int, int);
    char c[4][10]={"XYZ","abcd","123456","***"};
    char *p[4];
    int n;
    f1(p,c,4);
    //��************found***********
    //n=f2[p,4,N);//�������
    n=f2(p,4,N);
    printf("����Ϊ%d���ַ�����%d��\n",N,n);
    return 0;
}
void f1(char *p[], char (*c)[10], int n)
{
    int i;
    for(i=0; i<n; i++)
        p[i]=c[i];
}
int f2(char *p[], int n, int x)
{
    int i, num, len;
    num=0;
    for(i=0; i<n; i++)
    {
        len=strlen(p[i]);
    //��************found***********
    //    if(len==x);//�������
        if(len==x)
            num++;
    }
    return num;
}
