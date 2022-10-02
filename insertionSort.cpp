#include<bits/stdc++.h>

using namespace std;

int main(){
          
#ifndef ONLINE_JUDGE

    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);

    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);

#endif

    int n;
    cin>>n;
    int arr[n];
    for (size_t i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    // insertion sort 
    for (int  i = 1; i < n; i++)
    {
        int current=arr[i];
        int j = i-1;
        while (arr[j]>current && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    
    for (size_t i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
