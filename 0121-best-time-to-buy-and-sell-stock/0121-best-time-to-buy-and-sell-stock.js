/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    let max = 0
    let min = Infinity
    for (let i=0; i<prices.length; i++){
        // 1. Update the lowest price we've seen so far
        if(prices[i]<min){
            min = prices[i]
        }
        // 2. Or, check if selling today gives us a better profit
        else{
            max = Math.max(max, prices[i]-min)
        }
    }
    return max
};