class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        unordered_map<int, int> occ;
        for (int num : arr)
            occ[num]++;

        int n = arr.size();
        int repeating = -1, missing = -1;

        // Detect repeating
        for (auto &p : occ)
            if (p.second == 2)
                repeating = p.first;

        // Detect missing
        for (int i = 1; i <= n; i++)
            if (occ.find(i) == occ.end())
                missing = i;

        return {repeating, missing};
    }
};