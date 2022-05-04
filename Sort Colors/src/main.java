import java.util.Iterator;

public class main {
    public  static void sortColors(int[] nums) {
        int zeros=0,ones=0,tows=0;
        int x=0;
        for(int i=0;i<nums.length;i++){
        
            if(nums[i]==0){
            	zeros++;
            }
            else if(nums[i]==1){
                ones++;
            }
            else{
                tows++;
            }
        }
        for (int i = 0; i < zeros; i++) 
			nums[i]=0;
        for (int i = zeros; i < ones+zeros; i++) 
        	nums[i]=1;
		for (int i = ones+zeros; i < nums.length; i++) {
			nums[i]=2;
			
		}
      //  System.out.println(zeros+ " "+ones+" "+tows);
        
    }
	public static void main(String[] args) {
		int arr[]= {2,0,2,1,1,0};
		sortColors(arr);
		for (int i = 0; i < arr.length; i++) {
			System.out.println(arr[i]);
		}
	}

}
