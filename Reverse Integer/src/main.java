
public class main {
	 public static int reverse(int x) {
	        
	    
	long reversed=0;
    while(x != 0) {
    
      // get last digit from num
      int digit = x % 10;
      reversed = reversed * 10 + digit;
     
      x /= 10;

    }
	if(reversed >= Integer.MIN_VALUE && reversed <= Integer.MAX_VALUE) {
		return (int)reversed;
	}

	return 0;
	
    }
	public static void main(String[] args) {
		int y=reverse(1534236469);
			System.out.println(Integer.MIN_VALUE +" "+ Integer.MAX_VALUE+" "+y);
	}

}
