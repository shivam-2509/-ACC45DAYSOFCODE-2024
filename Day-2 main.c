#include <stdio.h>
#include <math.h>
 
  int main(){
    int N;
    float x;
    
    printf("enter the number of friends:");
    scanf("%d", &N);
    printf("enter the cost of one subscription:");
    scanf("%f",&x);
    
    int subscriptionsNeeded = (N + 5) / 6;
    
    float totalcost = subscriptionsNeeded * x;
    
    printf("minimum total cost: %.2f rupees\n", totalcost);
    return 0;
  }    
    