void insertion(int *arr,int n){
    //pick up the cuurent element and place at proper place
    int i,k,j;
    
    for(i=0;i<n;i+=1){
        k=arr[i];//k is to be inserted at proper place by shifting the array
        for(j=i-1;j>=0&&k<arr[j];j--)
        arr[j+1]=arr[j];//after shifting 
        arr[j+1]=k;//place current element at proper place
    }
}

