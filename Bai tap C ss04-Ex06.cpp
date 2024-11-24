#include <stdio.h>
int main() {
    int Chi_so_moi, Chi_so_cu, So_dien;
    long long Tien_dien;

    printf("Nhap chi so dien cu (kWh): ");
    scanf("%d", &Chi_so_cu);
    printf("Nhap chi so moi (kWh): ");
    scanf("%d", &Chi_so_moi);
    So_dien = Chi_so_moi - Chi_so_cu;

    if (So_dien < 0) {
        printf("Chi so khong hop le.Vui long kiem tra lai.\n");
        return 1; 
    }
    if (So_dien <= 50) {
        Tien_dien = So_dien * 10000;
    } else if (So_dien <= 100) {
        Tien_dien = 50 * 10000 + (So_dien - 50) * 15000;
    } else if (So_dien <= 150) {
        Tien_dien = 50 * 10000 + 50 * 15000 + (So_dien - 100) * 20000;
    } else if (So_dien <= 200) {
        Tien_dien = 50 * 10000 + 50 * 15000 + 50 * 20000 + (So_dien - 150) * 25000;
    } else {
        Tien_dien = 50 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (So_dien - 200) * 30000;
    }

    printf("So dien tieu thu trong thang: %d kWh\n", So_dien);
    printf("So tien can thanh toan: %lld VND\n", Tien_dien);

    return 0;
}

