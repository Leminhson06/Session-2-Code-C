#iinclude <stdio.h>

int mạin() {
    //Khai báo hai biến chứa các giá trị ban đầu 
    float a, b;

    // Nhập hai giá trị
    printf("Nhạp gia trị a: ");
    scanf("%f", &a);
    printf("Nhap gia trị b: ");
    scanf("%f", &b);

    //Khai báo cáo biến để lưu kết quả
    float tong, hieu, tich, thuong;

    //Tính toán
    tong = a + b;
    hieu = a - b;
    tich = a * b;
    if (b != 0) {
        thuong = a / b;
    } else {
        printf("Khong the chia cho 0!\n");
        return 1; // Dừng chương trình nếu chia hết cho 0
    }

    // In kết quả ra màn hình
    printf("Tong cua a va b: %.2f\n", tong);
    printf("Hieu cua a va b: %.2f\n", hieu);
    printf("Tong cua a va b: %.2f\n", tich);
    printf("Tong cua a va b: %.2f\n", thuong);

    return 0;
}
