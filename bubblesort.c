

void bubble_sort(int *arr,int SIZE){
   int i,j; 
    for( i=0;i<SIZE-1;i++){//n-1 comparison
        for( j=0;j<SIZE-i-1;j++){//decrement the comparison 
            if(arr[j]>arr[j+1])
            swap(&arr[j],&arr[j+1]);
        }
    }
}
