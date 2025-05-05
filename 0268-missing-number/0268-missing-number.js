/**
 * @param {number[]} nums
 * @return {number}
 */
var missingNumber = function(nums) {
    const total = nums.length;
    const calculate = (total*(total+1))/2;
    let sum =0;
    for(let i=0;i<nums.length;i++){
        sum  = sum + nums[i];
    }  
    return calculate - sum;
};