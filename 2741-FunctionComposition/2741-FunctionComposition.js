// Last updated: 7/27/2026, 3:01:33 PM
/**
 * @param {Function[]} functions
 * @return {Function}
 */
var compose = function(functions) {
    if (functions.length===0){
        return function(x){return x;};
    }
    return functions.reduceRight(function(prefn,nextfn){
        return function (x){
            return nextfn(prefn(x));
        };
    });
};

/**
 * const fn = compose([x => x + 1, x => 2 * x])
 * fn(4) // 9
 */