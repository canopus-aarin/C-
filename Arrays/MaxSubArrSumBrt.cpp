#include<iostream>
#include<climits>


using namespace std;

int MaxSubarray(int arr[], int n){

    int maxi = INT_MIN;

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){

            int sum=0;
            for(int k=i;k<=j;k++){
                sum = sum + arr[k];
            }
            maxi = max(maxi,sum);
        }
    }
    return maxi;
}


int main(){
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxsum = MaxSubarray(arr,n);
    cout<<"The maximum subarray sum is: "<<maxsum<<endl;

    return 0;
}