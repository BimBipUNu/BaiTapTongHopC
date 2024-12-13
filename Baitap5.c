/*Viết chương trình C để nhập vào 1 số nguyên dương.
Kiểm tra số đó có phải số nguyên tố hay không .*/
#include <stdio.h>
#include <math.h>
int main()
{
    int n, count;
    printf("Nhập một số nguyên dương: ");scanf("%d",&n);
    if (n<0)
    {
        printf("Dữ liệu không hợp lệ");
    }
    if(n==2)
    {
        printf("2 là số nguyên tố");
    }else
    {
        for (int i =2; i <= sqrt(n); i++)
        {
            if(n%i==0)
            {
                count++;
            }
        }
        if(count == 0)
        {
            printf("%d là số nguyên tố",n);
        }else
        {
            printf("%d không là số nguyên tố",n);
        }
    }
}