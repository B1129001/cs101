#include <stdio.h>

int main()
{
    int n=7;
    for(int i=1;i<=n;i++){
        for(int j=n+1;j>0;j--){
            if(j==1){
                printf("\n",i);
            }
            else if(j-i>1){
                printf(" ");
            }
            else{
                printf(" %d",i);
            }
        }    
        
    }

    return 0;
}
