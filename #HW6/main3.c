 #include <stdio.h>

int main() {
    int year = 2022;
    if ((year % 4) == 0 && (year % 100)!= 0 || (year % 400) == 0) {
        printf("\t %d 是閏年 \n" , year);
    } else {
        printf("\t %d 不是閏年 \n" , year);
    }

    return 0;
}
