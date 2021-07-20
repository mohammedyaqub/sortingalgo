
#include <stdio.h>
#define SIZE 10
#define SWAP(a,b) {a=a^b;b=a^b;a=a^b;}
void swap(int *a,int *b){
int t=*a;
*a=*b; 
*b=t;}
void bubble_sort(int *arr){
   int i,j; 
    for( i=0;i<SIZE-1;i++){//n-1 comparison
        for( j=0;j<SIZE-i-1;j++){//decrement the comparison 
            if(arr[j]>arr[j+1])
            swap(&arr[j],&arr[j+1]);
        }
    }
}
int main(){
    int arr[SIZE]={3,2,5,1,6,9,4,23,16,12};
    int i;
printf("before sorting \n");for(i=0;i<SIZE;i++)
    printf("%d",arr[i]);

//int SIZE =sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr);
//printf("%d",arr[i]);
printf("before sorting \n");for(i=0;i<SIZE;i++)

    for(i=0;i<SIZE;i++)
    printf("%d",arr[i]);

    return 0;
}
