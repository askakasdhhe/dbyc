/*#include<stdio.h>


int main()
{
    int a = 5, b = 10;
    printf("a = %d, b = %d", a, b);
    return 0;
}*/
#include<stdio.h>
#define  M(x,y,z)  x*y+z 
void main() 
{ 
 int  a=1,b=2, c=3;  
 printf("%d\n", M(a+b,b+c, c+a)); 
} 