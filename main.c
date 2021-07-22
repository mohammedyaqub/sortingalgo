#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<assert.h>
#include "sorting.h"
int swap(int *a,int*b){
    int t=*a;*a=*b;*b=t;
}
void printArray(int *arr,int n){
    int i;
    for(i=0;i<n;i++)printf("%d\t",arr[i]);
}

int compare_array(int *arr1,int *arr2){
//int len
int z = memcmp(arr1, arr2, sizeof(arr1));
if(!z)
    printf("Arrays are equal\n");
else
    printf("Arrays are not equal\n");
}
int main()
{   //test 
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int exp[]={5,6,7,11,12,13};
    int arr_size = sizeof(arr) / sizeof(arr[0]); 
    printf("Given array is \n");
    printArray(arr, arr_size);
    /*while(1){
    printf("enter the sorting technique 1.merge 2.bubble 3.quicksort 4.insertion 5.selection 6.exit ");
    scanf("%d",c);
 switch(c){//defination cant be part of case statement
    case 1:mergeSort(arr, 0, arr_size - 1);break;
    case 2:bubble_sort(arr);break;
    case 3:quicksort(arr,0,arr_size-1);break;
    case 4:insertion(arr,arr_size-1);break;
    case 5:selection(arr,arr_size-1);break;
    case 6:exit(1);
 }printf("to exit press 0");
 
    }
    printf("\nSorted array is \n");
    printArray(arr, arr_size);*/
    clock_t begin=clock();
    insertion(arr,arr_size-1);
    compare_array(arr,exp);
    clock_t end=clock();
    double time_taken1 = (double)(end-begin)/CLOCKS_PER_SEC;
    printf("\ntotal time for insertion sorting  is %f\n",time_taken1);
    clock_t b=clock();// %f is return value to avoid warnings
    selection(arr,arr_size-1);
    clock_t e=clock();
    double time_taken2 = (double)(e-b)/CLOCKS_PER_SEC;
    printf("total time  for seletion sorting is %f\n",time_taken2);
    clock_t beg=clock();
    bubble_sort(arr,arr_size-1);
    clock_t en=clock();
    double time_taken3 = (double)(en-beg)/CLOCKS_PER_SEC;
    printf("total time for bubble sorting is %f\n",time_taken3);
    clock_t begi=clock();
    mergeSort(arr,0,arr_size-1);
    clock_t endi=clock();
    double time_taken4 = (double)(endi-begi)/CLOCKS_PER_SEC;
    printf("total time mergesort for sorting is %f\n",time_taken4);
    clock_t begining=clock();
    quicksort(arr,0,arr_size-1);
    clock_t ending=clock();
    double time_taken5 = (double)(ending-begining)/CLOCKS_PER_SEC;
    printf("total time quicksort  for sorting is %f\n",time_taken5);
    return 0;
}

