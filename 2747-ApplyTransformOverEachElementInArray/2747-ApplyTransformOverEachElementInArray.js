// Last updated: 7/27/2026, 3:01:30 PM
/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    for (let i=0;i<arr.length;i++){
        arr[i]=fn(arr[i],i);
    }
    return arr;
};