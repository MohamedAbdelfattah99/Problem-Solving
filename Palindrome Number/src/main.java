
public class main {
	public static int reversNumber(int num) {
		int reversed=0;
	    while(num != 0) {
	    
	      // get last digit from num
	      int digit = num % 10;
	      reversed = reversed * 10 + digit;

	      // remove the last digit from num
	      num /= 10;
	    }
	    return reversed;
	}
	boolean isPalindrome (int n){
		int length = (int)(Math.log10(n)+1);
		if(length %2!=0) {
			double len=(length/2)+1;
			double rightNumberOfDigtis = Math.pow(10, len);
			int right=(int) (n%(rightNumberOfDigtis));
			int left=(int) (n/rightNumberOfDigtis);
			right=reversNumber(right);
			if(right/10==left ) {
				return true;
			}
			return false;

		}
		else {
			double len=(length/2);
			double rightNumberOfDigtis = Math.pow(10, len);
			int right=(int) (n%(rightNumberOfDigtis));
			int left=(int) (n/rightNumberOfDigtis);
			left=reversNumber(left);
			if(right==left ) {
				return true;
			}
			return false;
		}
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
	
	}
}
