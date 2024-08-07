#include <stdio.h>

int main() {
    int num1[50] = {1, 2, 3, 4, 5, 6, 7};
    int num2[50] = {2, 4, 5, 9, 8, 5, 8, 5, 8, 6, 8};
    int sum[51] = {0};
    int length1 = 0, length2 = 0, sumIndex, carry = 0;

    while (length1 < sizeof(num1) / sizeof(num1[0]) && num1[length1] != 0) length1++;
    while (length2 < sizeof(num2) / sizeof(num2[0]) && num2[length2] != 0) length2++;

    int maxLength = length1 > length2 ? length1 : length2;

    sumIndex = maxLength;
    for (int i = length1 - 1, j = length2 - 1; sumIndex > 0; sumIndex--, i--, j--) {
        int val1 = (i >= 0) ? num1[i] : 0;
        int val2 = (j >= 0) ? num2[j] : 0;

        sum[sumIndex] = (val1 + val2 + carry) % 10;
        carry = (val1 + val2 + carry) / 10;
    }

    sum[0] = carry;

    int startIndex = (sum[0] == 0) ? 1 : 0;
    for (int i = startIndex; i <= maxLength; i++) {
        printf("%d", sum[i]);
    }
    printf("\n");
}
