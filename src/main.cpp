#include <stdio.h>
#include "main.h"

#ifndef TEST
int main() {
    int a;
    printf("請輸入寶石數量:\n");
    scanf(" %d",&a);
    printf("可以進行 %d抽\n", drawCard(a));
    return 0;
}
#endif // TEST

int addNumber(int a, int b) {
    return a + b;
}

int getTriangleType(int a, int b, int c) {
    if (a > b && a > c) {
        int temp = c; c = a; a = temp;
    }
    else if (b > a && b > c) {
        int temp = c; c = b; b = temp;
    }

    if (a + b <= c) {
        return -2;
    }
    else if (a * a + b * b == c * c) {
        return 0;
    }
    else if (a * a + b * b > c * c) {
        return 1;
    }
    else if (a * a + b * b < c * c) {
        return -1;
    }
    return -3;


}

int drawCard(int a) {
  int b=a/3;
  return b;

  if (a<0)
    return 0;


}


