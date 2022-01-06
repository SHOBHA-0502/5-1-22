// #include <iostream>
// using namespace std;

// int tripletSum(int *input, int size, int x)
// {int count =0;
// 	for(int i =0 ; i<size;i++){
//         int y = x -input[i];
//         cout<< input[i]<<" //"<<endl;
//         for(int j=i+1;j<size;j++){
//             for(int k =i+2;k<size;k++){
//                 if(input[j]+input[k]==y && j!=k && i!=j){
//                     cout<<input[i]<<" "<< input[j]<<" "<<input[k]<<" "<< x<<" "<< y <<endl;
//                     count+=1;
//                 }
//             }
            
//         }
//     } return count/2;
    
// }
// //x+y +z=k;
// int main()
// {
// 	int t;
// 	cin >> t;

// 	while (t--)
// 	{
// 		int size;
// 		int x;
// 		cin >> size;

// 		int *input = new int[size];

// 		for (int i = 0; i < size; i++)
// 		{
// 			cin >> input[i];
// 		}
// 		cin >> x;

// 		cout << tripletSum(input, size, x) << endl;

// 		delete[] input;
// 	}

// 	return 0;
// }
// #include<algorithm>
// int tripletSum(int *input, int n, int x)
// {   int l , h;
//  int count = 0;
//     sort(input,input+n);
//  for(int i =0 ; i<n;i++){
//      l=i+1; h= n-1;
//      while(l<h){
//          int current = input[i]+input[l]+input[h];
//          if(current == x){
//              count+=1;
//              l++;
//              h--;
             
//          }
//          else if(current <x){
//              l++;
//          }
//          else{
//              h--;
//          }
         
//      }
//  }
//  return count ;
    
// }
int tripletSum(int *input, int size, int x)
{
	//Write your code here
     int l, r;
   int count=0;
    // Fix the first element as A[i]
    for (int i = 0; i < size- 2; i++)
    {
 
        // Fix the second element as A[j]
        for (int j = i + 1; j < size - 1; j++)
        {
 
            // Now look for the third number
            for (int k = j + 1; k < size; k++)
            {
                if (input[i] + input[j] + input[k] == x)
                {
                    /*cout << "Triplet is " << input[i] <<
                        ", " << input[j] << ", " << input[k]; */
                    count++;
                }
            }
        }
    }
    return count;
}  