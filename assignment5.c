#include <stdio.h>

int main() {
    int a[10][10], b[10][10], sum[10][10];
    int i, j, k, r, c, n;

    // STEP 1: Input order
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    // STEP 2: Input matrix A
    printf("Enter first matrix:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d", &a[i][j]);

    // STEP 3: Input matrix B (for addition)
    printf("Enter second matrix:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d", &b[i][j]);

    // STEP 4: Matrix Addition
    printf("\nSum of matrices:\n");
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    // STEP 5: Saddle Point
    int min, col, found = 0;
    for(i=0;i<r;i++) {
        min = a[i][0];
        col = 0;

        for(j=1;j<c;j++) {
            if(a[i][j] < min) {
                min = a[i][j];
                col = j;
            }
        }

        for(k=0;k<r;k++) {
            if(a[k][col] > min)
                break;
        }

        if(k == r) {
            printf("\nSaddle Point = %d\n", min);
            found = 1;
        }
    }
    if(!found)
        printf("\nNo Saddle Point\n");

    // STEP 6: Inverse (only if 2x2)
    if(r == 2 && c == 2) {
        float det;
        float inv[2][2];

        det = (a[0][0]*a[1][1]) - (a[0][1]*a[1][0]);

        if(det == 0) {
            printf("\nInverse not possible\n");
        } else {
            inv[0][0] = a[1][1]/det;
            inv[0][1] = -a[0][1]/det;
            inv[1][0] = -a[1][0]/det;
            inv[1][1] = a[0][0]/det;

            printf("\nInverse Matrix:\n");
            for(i=0;i<2;i++) {
                for(j=0;j<2;j++)
                    printf("%.2f ", inv[i][j]);
                printf("\n");
            }
        }
    } else {
        printf("\nInverse only for 2x2 matrix\n");
    }

    // STEP 7: Magic Square Check
    if(r == c) {
        int magic = 1, sum_row = 0, temp;

        for(j=0;j<c;j++)
            sum_row += a[0][j];

        for(i=1;i<r;i++) {
            temp = 0;
            for(j=0;j<c;j++)
                temp += a[i][j];
            if(temp != sum_row)
                magic = 0;
        }

        for(j=0;j<c;j++) {
            temp = 0;
            for(i=0;i<r;i++)
                temp += a[i][j];
            if(temp != sum_row)
                magic = 0;
        }

        temp = 0;
        for(i=0;i<r;i++)
            temp += a[i][i];
        if(temp != sum_row)
            magic = 0;

        temp = 0;
        for(i=0;i<r;i++)
            temp += a[i][r-i-1];
        if(temp != sum_row)
            magic = 0;

        if(magic)
            printf("\nMagic Square\n");
        else
            printf("\nNot a Magic Square\n");
    }

    return 0;
}
