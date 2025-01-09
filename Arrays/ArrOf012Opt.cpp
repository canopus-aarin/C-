#include<iostream>
#include<vector>

using namespace std;

void SortArray(vector<int>&arr, int n){

    int low =0, mid=0, high=n-1;

    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1){
            mid++;
        }
        else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main(){

    int n = 6;
    vector<int> arr = {0, 2, 1, 1, 0, 1};
    SortArray(arr,n);
    cout<<"After Sorting: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    return 0;
}