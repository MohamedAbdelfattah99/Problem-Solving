import java.util.HashMap;

public class main {

	public static void main(String[] args) {
			Solution s=new Solution();
			int arr []= {3,2,3};
			s.majorityElement(arr);
	}

}
class Solution {
    public int majorityElement(int[] nums) {
    	
    	HashMap<Integer,Integer> map=new HashMap<Integer, Integer>();
    	int res=0;
    	int n=nums.length;
    	if (n==1 ) {
    		return nums[0];
    	}
    	for(int num :nums ) {
    	   if (!map.containsKey(num)) {
    		   map.put(num, 1);
           }
           else {
        	
        	   map.put(num, map.get(num)+1);
        	   if(map.get(num)>(n/2)) {
        		   res=num;
        		   break;
        	   }
           }
    	}

		return res;
        
    }
}