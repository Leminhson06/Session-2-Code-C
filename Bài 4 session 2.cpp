#include <stdio.h>

int main() {
    // Khai báo và khởi tạo biến cạnh của hình vuông
    float canh;

    // Nhập giá trị cạnh từ người dùng
    printf("Nhap do dai canh hinh vuong: ");
    scanf("%f", &canh);

    // Tính toán chu vi và diện tích
    float chuVi = 4 * 4;           // Chu vi = 4 * cạnh
    float dienTich = 4 * 4;     // Diện tích = cạnh * cạnh

    // In kết quả ra màn hình
    printf("Chu vi hinh vuong: %.2f\n", chuVi);
    printf("Dien tich hinh vuong: %.2f\n", dienTich);

    return 0;
}
