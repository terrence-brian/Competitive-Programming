//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


// } Driver Code Ends
class Solution
{
    public:
    int select(int arr[], int i)
    {
        // code here such that selectionSort() sorts arr[]
    }
     
    void selectionSort(int arr[], int n)
    {
       //code here
       for(int i=0; i<n-1; i++){
           for(int j=i+1; j<n; j++){
               if(arr[i] > arr[j]){
                   swap(arr[j], arr[i]);
               }
           }
       }
    }
};
