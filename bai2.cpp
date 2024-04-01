#include <stdio.h>
int kiemTraSoChinhPhuong(int n) {
  int i = 1;
  while (i * i <= n) {
    if (i * i == n) {
      return 1;
    }
    i++;
  }
  return 0;
}
int demSoChinhPhuong(int n) {
  int dem = 0;
  for (int i = 1; i <= n; i++) {
    if (kiemTraSoChinhPhuong(i)) {
      dem++;
    }
  }
  return dem;
}

int main() {
  int n;
  printf("Nhap so n: ");
  scanf("%d", &n);

  int soChinhPhuong = demSoChinhPhuong(n);
  printf("So luong so chinh phuong nho hon %d la: %d\n", n, soChinhPhuong);

  printf("Danh sach cac so chinh phuong nho hon %d la:\n", n);
  for (int i = 1; i <= n; i++) {
    if (kiemTraSoChinhPhuong(i)) {
      printf("%d ", i);
    }
  }

  return 0;
}

