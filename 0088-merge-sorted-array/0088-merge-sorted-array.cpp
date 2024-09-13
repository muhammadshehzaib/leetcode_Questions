class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int count = n;
        for(int i=m;i<nums1.size();i++){
            if(nums1.size()==1 && nums2.size()==1){
            nums1[0] = nums2[0];
            break;
        }
        else if(m==0){
            int num = abs(i-(n-1));
            nums1[i] = nums2[num];

        }
        else{
            int num = abs(n-count);
            nums1[i] = nums2[num];
            count--;
        }
     }
        sort(nums1.begin(),nums1.end());
    }
};