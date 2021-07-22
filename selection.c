

void selection(int *arr,int n){
    //select the small element and swap 
    int i,j,min;
    for(i=0;i<n;i+=1){
        min=i;
        for(j=i+1;j<n;j++){
            if(arr[min]>arr[j])
            min=j;
        }
        if(i!=min){
            swap(&arr[i],&arr[min]);
        }
    }
}
