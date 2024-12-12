#include<stdio.h>
int main()
{
    int hour, money;
    printf("Nhập số giờ làm trong tháng: "); scanf("%d",&hour);
    printf("Nhập mức lương theo giờ: ");scanf("%d",&money);
    int sum =money*hour;
    int bonus;
    if(hour>160)
    {
        bonus = (money*0.1)*hour;
    }
    printf("Số tiền lương cơ bản là: %dvnd. Số tiền phụ cấp là: %dvnd. Tổng tiền nhận được là: %dvnd",sum,bonus,sum+bonus);
}