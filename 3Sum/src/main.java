import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;

import javax.naming.ldap.SortControl;

public class main {

	   public static List<List<Integer>> threeSum(int[] nums) {
		   HashMap<Integer, Integer> map=new HashMap<Integer, Integer>();
		   List<List<Integer>> ouput=new ArrayList<List<Integer>>();
		   if(nums.length<=2) {
			   return ouput;
		   }
		    Arrays.sort(nums);

		   for(int i=0;i<nums.length;i++) {
			   map.put(nums[i], nums[i]);
		   }
		   
		   for(int i=0;i<nums.length;i++) {
			   for(int j=i;j<nums.length-1;j++) {
			   int num1=nums[j];
			   int num2=nums[j+1];
			   int sum=num1+num2;
			   int remd=(0-sum);
			  int num3=map.getOrDefault(remd,-999999999);
			   if(num3 != -999999999 ) {
				 List<Integer> x=new ArrayList<Integer>();
				 x.add(num1);
				 x.add(num2);
				 x.add(num3);
				 x.sort(null);
				 if(ouput.contains(x)) {
					 break;
				 }
				 ouput.add(x);
				 
			   }
		   }
		   }
		
			return ouput;

	    }	
	public static void main(String[] args) {
			int arr[]= {-1,0,1,0};
		  //  Arrays.sort(arr);
		List<List<Integer>>output=threeSum(arr);
		    	System.out.println(output);
	}

}
