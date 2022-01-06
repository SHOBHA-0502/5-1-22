#include <iostream>
using namespace std;
int findUnique(int *arr, int size)
{ for(int i =0 ; i< size; i++){
    for(int j =0 ; j<=size; j++){
        if(i ==j){
            continue;
        }
        else if( arr[i]==arr[j]){
            break;
        }
        else if(j==size){
            return arr[i];
        }
        
    }
}
}



int main()
{

	int t;
	cin >> t;

	while (t--)
	{
		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		cout << findUnique(input, size) << endl;
	}

	return 0;
}