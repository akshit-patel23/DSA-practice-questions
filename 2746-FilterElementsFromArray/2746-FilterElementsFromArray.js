// Last updated: 7/27/2026, 3:01:32 PM
/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    var filteredArr=[];
    for(let i=0;i<arr.length;i++){
        if(fn(arr[i],i)){
            filteredArr.push(arr[i]);
        }
    }
    return filteredArr;
};