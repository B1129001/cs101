#include <stdio.h>
int row = 5;
void print_spaces(int r) {
    for (int i = 0; i<r;i++){
        printf("  ");
    }
}

void print_stars(int row, int r) {
    for(int i=0; i<2*row-(2*r+1); i++) {
        printf("* ");
    }
}
int main() {
    int row = 5;
    for (int r=0;r<row;r++) {
        print_spaces(r);
        print_stars(row,r);
        printf("\n");
    }

    return 0;
}
