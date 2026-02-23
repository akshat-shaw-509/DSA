#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;
int longestConsecutive(vector<int>&arr){
    int n=arr.size();
    int lastNo=INT_MIN;
    int count=0,largest=1;
    if(n==0) return 0;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        if(arr[i]-1==lastNo){
            count++;
            lastNo=arr[i];
        }
        else if(arr[i]!=lastNo){
            count=1;
            lastNo=arr[i];
        }
        largest=max(largest,count);
    }
    return largest;
}
int main() {
    vector<int> a = {100, 4, 200, 1, 3, 2}; 
    int ans = longestConsecutive(a); 
    cout << "The longest consecutive sequence is " << ans << "\n";
    return 0;
}