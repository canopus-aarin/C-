#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std;

int longestSuccessiveElements(vector<int>&a){

    int n = a.size();
    if (n == 0) return 0;


    sort(a.begin(), a.end());
    int lastSmaller = INT_MIN;
    int cnt = 0;
    int longest = 1;


    for(int i=0;i<n;i++){
        if(a[i] - 1 == lastSmaller){

            cnt = cnt+1;
            lastSmaller = a[i];
        }

        else if(a[i] != lastSmaller){
            cnt = 1;
            lastSmaller = a[i];
        }
        longest = max(longest, cnt);
    }

    return longest;

}


int main(){

    vector<int> a = {100, 200, 1, 2, 3, 4};
    int ans = longestSuccessiveElements(a);
    cout<<"The Longest consective sequence is "<<ans<<endl;

    return 0;
}