class Solution {
  public:
    int longestConsecutive(vector<int>& arr) {
        int count=1,res=0;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            if(arr[i+1]==arr[i]+1){
                count++;
            }
            else if(arr[i]==arr[i+1]){
                continue;
            }
            else{
                res=max(res,count);
                count=1;
            }
        }
        res=max(res,count);
        return res;
    }
};