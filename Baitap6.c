/*Viết chương trình C để nhập vào 1 số nguyên dương n.
Hãy tìm và in ra n số nguyên tố đầu tiên .*/
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Nhập một số nguyên dương: ");scanf("%d",&n);
    if (n<0)
    {
        printf("Dữ liệu không hợp lệ");
    }
    int sum =0;
    int num =2;
    while ( sum < n)
    {
        int count =0;
        for ( int i = 2 ; i <= sqrt(num);i++)
        {
            if(num % i ==0)
            {
                count++;
            }
        }
        if(count == 0)
        {
            printf("%d\n",num);
            sum++;
        }
        num++;
    }
}