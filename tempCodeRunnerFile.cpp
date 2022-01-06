int tripletSum(int *input, int size, int x)
{int count =0;
	for(int i =0 ; i<size;i++){
        int y = x -input[i];
        //cout<< input[i]<<" //"<<endl;
        for(int j=i+1;j<size;j++){
            for(int k =i+2;k<size;k++){
                if(input[j]+input[k]==y && j!=k && i!=j){
                    //cout<<input[i]<<" "<< input[j]<<" "<<input[k]<<" "<< x<<" "<< y <<endl;
                    count+=1;
                }
            }
            
        }
    } return count/2;
    
}