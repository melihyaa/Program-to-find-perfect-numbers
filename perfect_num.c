#include <stdio.h>
#include <math.h>

int main(){
    
    int num;
    int sum=0;
    
    printf("Enter number");
    scanf("%d",&num);

    for(int i = 1 ; i<num ; i++){
        if(num % i == 0){
                sum = sum + i ; 
            }
    }
    
    printf("Total value = %d",sum);
    
    if(sum == num){
        printf("\n%d = %d so this is perfect number. ",num,sum);
    }else{
        printf("\n%d != %d so this is not perfect number. ",num,sum);
    }
    
}