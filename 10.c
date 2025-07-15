#include <stdio.h>

int main() {
    int amount, note10, note5, note1;

    printf("Enter the amount to withdraw: ");
    scanf("%d", &amount);

    note10 = amount / 10;            // 10 rupees notes
    amount = amount % 10;            // bacha hua amount

    note5 = amount / 5;              // 5 rupees notes
    amount = amount % 5;             // bacha hua amount

    note1 = amount;                  // remaining 1 rupees notes

    printf("10 rupees notes = %d\n", note10);
    printf("5 rupees notes = %d\n", note5);
    printf("1 rupee notes = %d\n", note1);

    return 0;
}
