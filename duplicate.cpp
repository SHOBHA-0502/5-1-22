int duplicateNumber(int *arr, int size)
{
    for(int i =0;i<size;i++){
        for(int j =0 ; j<size;j++){
            if(i==j){
                continue;
            }
            else if( arr[i]==arr[j]){
                return arr[i];
                break;
            }
        }
    }
}