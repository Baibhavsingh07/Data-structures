class Solution {
    public int[] sortedSquares(int[] nums) {
        int t,i,j=nums.length;
        for(i=0;i<nums.length;i++){
            nums[i]=nums[i]*nums[i];
        }
        Arrays.sort(nums);
        return nums;
    }
}