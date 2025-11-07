#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int goc = 1000000; // Số tiền ban đầu
    int cuoc;          // Số tiền cược
    char duDoan;       // Dự đoán của người chơi ('T' cho Tài, 'X' cho Xỉu)

    srand(time(0)); // Khởi tạo seed cho hàm rand()

    printf("Bắt đầu cá cược, Chúc ông chủ may mắn nhé!\n");
    while (goc > 0)
    {
        printf("\nSố tiền hiện có: %d\n", goc);
        printf("Nhập số tiền cược: ");
        scanf("%d", &cuoc);

        if (cuoc > goc || cuoc <= 0)
        {
            printf("Số tiền cược không hợp lệ!\n");
            continue;
        }

        printf("Dự đoán của bạn (T cho Tài, X cho Xỉu): ");
        scanf(" %c", &duDoan);

        // Random giá trị của 3 con xúc xắc
        int xuc_xac_1 = (rand() % 6) + 1;
        int xuc_xac_2 = (rand() % 6) + 1;
        int xuc_xac_3 = (rand() % 6) + 1;

        int tong = xuc_xac_1 + xuc_xac_2 + xuc_xac_3; // Tổng giá trị của 3 con xúc xắc
        printf("Mở bát: %d, %d, %d (Kết quả: %d)\n", xuc_xac_1, xuc_xac_2, xuc_xac_3, tong);

        // Kiểm tra kết quả
        if ((tong >= 11 && tong <= 17 && duDoan == 'T') || (tong >= 4 && tong <= 10 && duDoan == 'X'))
        {
            printf("Bạn đã thắng!\n");
            goc += cuoc; // Cộng tiền thắng
        }
        else
        {
            printf("Bạn đã thua!\n");
            goc -= cuoc; // Trừ tiền thua
        }
    }

    printf("Bạn đã hết tiền! Trò chơi kết thúc.\n");
    return 0;
}