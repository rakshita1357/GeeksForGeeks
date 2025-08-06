
class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        unordered_map<int,int> map;
        int sum=0,maxno=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            if(sum==k){
                maxno=i+1;
            }
            if(map.find(sum-k)!=map.end()){
                maxno=max(maxno,i-map[sum-k]);
            }
            if(map.find(sum)==map.end()){
                map[sum]=i;
            }
        }
        return maxno;
    }
};