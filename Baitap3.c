#include<stdio.h>
int main()
{
    printf("==========CHUONG TRINH CHUYEN DOI TIEN TE==========\n");
    printf("1. USD to VND\n");
    printf("2. EUR to VND\n");
    printf("3. JPY to VND\n");
    printf("4. JPY to VND\n");
    printf("5. VND to USD\n");
    printf("6. VND to EUR\n");
    printf("7. VND to GBP\n");
    printf("8. VND to JPY\n");
    int n;
    float money1,money2;
    printf("Nhập đơn vị tiền tệ bạn muốn chuyển đổi (1-8) ? "); scanf("%d",&n);
    printf("Nhập số tiền muốn đổi: "); scanf("%f",&money1);
    switch(n)
    {
        case 1:
            money2 = money1 * 23500;
            printf("%f USD = %f VND",money1,money2);
            break;
        case 2:
            money2 =money1 *25000;
            printf("%f EUR = %f VND",money1,money2);
            break;
        case 3:
            money2 =money1 *28000;
            printf("%f GBP = %f VND",money1,money2);
            break;
        case 4:
            money2 =money1 *180;
            printf("%f JPY = %f VND",money1,money2);
            break;
        case 5:
            money2 =money1 /23500;
            printf("%f VND = %f USD",money1,money2);
            break;
        case 6:
            money2 =money1 /25000;
            printf("%f VND = %f EUR",money1,money2);
            break;
        case 7:
            money2 =money1 /28000;
            printf("%f VND = %f GBP",money1,money2);
            break;
        case 8:
            money2 =money1 /180;
            printf("%f VND = %f JPY",money1,money2);
            break;
        default:
        printtf("Dữ liệu không hợp lệ");
    }
}