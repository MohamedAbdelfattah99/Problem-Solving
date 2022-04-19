import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class main {
	public static List<List<Integer>> output = new ArrayList<>();

	public static List<List<Integer>> combinationSum(int[] nums, int target) {
	    Arrays.sort(nums);
	    backtrack(output, new ArrayList<>(), nums, target, 0);
	    return output;
	}
	
	public static void backtrack(List<List<Integer>> list, List<Integer> tempList, int [] nums, int target, int start){
	    if(target < 0) {
	    	return;
	    }
	    else if(target == 0) list.add(new ArrayList<>(tempList));
	    else{ 
	        for(int i = start; i < nums.length; i++){
	            tempList.add(nums[i]);
	            backtrack(list, tempList, nums, target - nums[i], i); // not i + 1 because we can reuse same elements
	            tempList.remove(tempList.size() - 1);
	        }
	    }
	}

	public static void main(String[] args) {
		int arr[]= {2,3,4,6,7};
		combinationSum(arr,7);
		System.out.println(output);
	}

}
