
void merge(int *Arr, int start, int mid, int end) {
	// create a temp array
	int temp[end - start + 1];//5-1+1=5
    //this algo has extra space its suitable for linked list
	int i = start, j = mid+1, k = 0;

	
	while(i <= mid && j <= end) {
		if(Arr[i] <= Arr[j]) {
			temp[k] = Arr[i];//either add lowest one to the temp
			k += 1; i += 1;
		}
		else {
			temp[k] = Arr[j];
			k += 1; j += 1;
		}
	}

	// add remaining elements to left  
	while(i <= mid) {
		temp[k] = Arr[i];
		k += 1; i += 1;
	}

	// add elements right 
	while(j <= end) {
		temp[k] = Arr[j];
		k += 1; j += 1;
	}

	// copy temp to original 
	for(i = start; i <= end; i += 1) {
		Arr[i] = temp[i - start];
	}
}
// Arr is an array of integer type
// start and end are the starting and ending index of current interval of Arr

void mergeSort(int *Arr, int start, int end) {

	if(start < end) {
	int mid=(start+end)/2;
	mergeSort(Arr,start,mid-1);//left half 
	mergeSort(Arr,mid+1,end);//right half
	merge(Arr,start,mid,end);//merge in sorted
	}
}
