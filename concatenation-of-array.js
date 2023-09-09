let nums = [1, 2, 1];
//Output: [1,2,1,1,2,1]

const getConcatenation = (nums) => {
  let size = nums.length;
  let ansSize = 2 * size;
  let ans = new Array(ansSize).fill(-1);

  let i = size - 1;
  while (i >= 0) {
    ans[i] = nums[i];
    ans[i + size] = nums[i];
    i--;
  }

  console.log(ans);
};

getConcatenation(nums);
