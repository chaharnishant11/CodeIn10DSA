#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    int arr[100];
    
    while(t--){
        int n;
        cin>>n;
        
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        // Reverse
        for(int i=0,j=n-1;i<n/2;i++,j--){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

	//code
	return 0;
}