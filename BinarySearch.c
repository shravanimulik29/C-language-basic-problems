#include <stdio.h>  
 int main()  
 {  int n;
  printf("enter the length of an array\n");
  scanf("%d",&n);
  
     int ara[n]; 
     int low_indx = 0;  
     int high_indx = n-1;  
     int mid_indx;  
     int num ; 
  printf("enter the number to find\n");
  scanf("%d",&num);
     while (low_indx <= high_indx) {  
         mid_indx = (low_indx + high_indx) / 2;  
         if (num == ara[mid_indx]) {  
             break;  
         }
         if (num < ara[mid_indx]) {
         	high_indx = mid_indx -1;
         }
         	
         else {  
             low_indx = mid_indx + 1;  
         }
     }
     if (low_indx > high_indx) {  
         printf("%d is not in the array\n", num);  
     }
     else {  
         printf("%d is found in the array. It is the %d th element of the array.\n", ara[mid_indx], mid_indx);  
     }
     return 0;  
 }
