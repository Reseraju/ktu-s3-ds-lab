#include<stdio.h>

int main(){

   int n, temp, i, j, array[20],count=0;

   printf("Enter array size (max 20)");
   scanf("%d",&n); // max size of the array

   for(i=0;i<n;i++){
        printf("Enter element no. %d : ",i+1);
        scanf("%d",&array[i]);  // entering elements from the user
    count++;
   }

   for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(array[j]>array[j+1]){
               temp=array[j];
               array[j]=array[j+1];
               array[j+1]=temp;
               count+3;
            }
        count++;
        }
    count++;
   }

   printf("Sorted array: ");
   for(i=0;i<n;i++){
      printf(" %d",array[i]); //printing sorted array
    count++; //to get time complexity
   }
    printf("\nTime complexity = %d",++count);
   return 0;
}
