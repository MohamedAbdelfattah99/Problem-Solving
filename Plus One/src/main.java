import java.math.BigInteger;

public class main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Solution s=new Solution();
		int arr[]= {7,2,8,5,0,9,1,2,9,5,3,6,6,7,3,2,8,4,3,7,9,5,7,7,4,7,4,9,4,7,0,1,1,1,7,4,0,0,6
};
		s.plusOne(arr);
	}

}

class Solution {
    public int[] plusOne(int[] digits) {
    	long  num=digits[0];
    	for(int i=1;i<digits.length;i++) {
    		num=(num*10)+digits[i];
    	}
    	num=num+1;
    	int length = String.valueOf(num).length();
    	int result[]=new int [length];
    	int x=length-1;
    	while(num!=0) {
    		result[x]=(int) (num%10);
    		num=num/10;
    		x--;
    	}
    
		return result;
        
    }
}