/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function (nums, target) {
    var indexOfHashMap = {};
    for (let i = 0; i < nums?.length; i++) {
        const diff = target - nums[i];
        if (diff in indexOfHashMap)
            return [i, indexOfHashMap[diff]];
        indexOfHashMap[nums[i]] = i;
    }
};