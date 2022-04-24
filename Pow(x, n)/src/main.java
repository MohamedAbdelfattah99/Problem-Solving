
public class main {
	 public static double myPow(double x, int n) {
	        if(n==0) {
	        	return 1;
	        }
	        boolean flag=false;
	        if(n<0) {
	        	n=-n;
	        	x=1/x;
	        	flag=true;
	        }
	        if(n%2==0) {
	        return myPow(x*x,n/2);
	        }
        else
	        return x*myPow(x*x, n/2);
	    }
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		double x=myPow(10,-2);
		System.out.println(x);
	}

}
