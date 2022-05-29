//
// Created by david on 26/04/22.
//

#define INTS 100

int main() {
    int i, space, rows, k = 0;
    printf("Enter the number of rows: ");
    INTS
    scanf("%d", &rows);
    for (i = 1; i <= rows; ++i, k = 0) {
        for (space = 1; space <= rows - i; ++space) {
            printf("  ");
        }
        while (k != 2 * i - 1) {
            printf("* ");
            ++k;
        }
        printf("\n");
    }
    return 0;
}
