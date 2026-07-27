// Last updated: 7/27/2026, 3:01:29 PM
/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    if(nums.length==0){
        return init;
    }
    var value=fn(init,nums[0]);
    for(let i=1;i<nums.length;i++){
        value= fn(value,nums[i]);
    }
    return value;
};