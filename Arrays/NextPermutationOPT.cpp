#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> NextGreaterPermutation(vector<int> &A){

    int n = A.size();
    int ind = -1;

    for(int i=n-2;i>=0;i++){
        if(A[i]<A[i=1]){

            ind =i;
            break;
        }
    }

    if(ind==-1){
        reverse(A.begin(),A.end());
        return A;
    }

    for(int i=n-1;i>ind;i--){
        if(A[i]>A[ind]){
            swap(A[i],A[ind]);
            break;
        }
    }

    reverse(A.begin()+ind+1,A.end());
    return A;
}



int main(){

    vector<int> A = {2,1,5,4,3,0,0};
    vector<int> ans = NextGreaterPermutation(A);

    cout<<"The Next Permutation "<<endl;
    for(auto it : ans){
        cout<<it<<" ";
    }

    return 0;
}