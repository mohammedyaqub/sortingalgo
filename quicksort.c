
int partition(int *arr,int low,int high){
int pivot=arr[high];
int i=(low-1);
int j;
for(j=low;j<=high-1;j++){
if(arr[j]<=pivot){
	i++;
	swap(&arr[i],&arr[j]);
}
}
swap(&arr[i+1],&arr[high]);
return (i+1);
}
void quicksort(int *arr,int i,int j){
if(i<j){
int q;
q=partition(arr,i,j);
quicksort(arr,i,j-1);//left half of array
quicksort(arr,i+1,j);//right half of array
}
}

