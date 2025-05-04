/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function(nums) {
    let frequency = {};
    for(let num of nums){
        frequency[num] = (frequency[num] || 0) +1;
    }
    let max=0;
    let maxVal = 0;

    for (const[key,value] of Object.entries(frequency)){
        if(value>max){
            max = value;
            maxVal = Number(key);
        }
    }
    return maxVal;

};