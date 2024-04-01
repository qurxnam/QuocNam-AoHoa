#include <stdio.h>

// Hàm kiểm tra xem số có phải là bội của 7 hay không
int isMultipleOf7(int num) {
  return (num % 7 == 0);
}

// Hàm xuất các số nguyên có 2 chữ số và là bội của 7
void printMultiplesOf7() {
  for (int i = 10; i <= 99; i++) {
    if (isMultipleOf7(i)) {
      printf("%d ", i);
    }
  }
}

// Hàm chính
int main() {
  // In ra các số nguyên có 2 chữ số và là bội của 7
  printf("Các số nguyên có 2 chữ số và là bội của 7 là: ");
  printMultiplesOf7();

  return 0;
}
