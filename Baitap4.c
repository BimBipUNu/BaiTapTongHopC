/*Viết chương trình C để nhập vào 1 số nguyên dương.
Tìm và hiển thị tất cả các ước của số đó .*/
#include <stdio.h>
int main()
{
    int n;
    printf("Nhập một số nguyên dương: ");scanf("%d",&n);
    if (n<0)
    {
        printf("Dữ liệu không hợp lệ");
    }
    for ( int i =n ; 1<=i ; i--)
    {
        if(n%i==0)
        {
            printf("%d là ước của %d\n", i , n);
        }
    }
}