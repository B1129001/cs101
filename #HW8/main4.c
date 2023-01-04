#include <stdio.h>
void round_func(float f){
    printf("%.0f",f);
}
int main()
{
    float f=1.2345;
    round_func(f);
    return 0;
}
