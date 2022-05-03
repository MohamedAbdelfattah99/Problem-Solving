
public class main {
    public static int searchInsert(int[] nums, int target) {
        int r = 0;
      int l = nums.length-1;
      while(r<=l){
          int mid = (r+l)/2;
          if(nums[mid] == target)
          {
              return mid;
          }
          else if(nums[mid] > target)
          {
              l = mid-1;
          }
          else 
              r = mid+1;
      }
      return r;
  }
	public static void main(String[] args) {
	int	nums []= {1,3,5,6};
	int target = 7;
	int output=searchInsert(nums, target);
	}

}
