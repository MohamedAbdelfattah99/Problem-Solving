
public class main {
	 public static void reverseString(char[] s) {
	        int p1=0,p2=s.length-1;
	        for(int i=0;i<s.length/2;i++) {

	        	char temp;
	        	temp=s[p1];
	        	s[p1]=s[p2];
	        	s[p2]=temp;
	  
	        	p1++;
	        	p2--;
	        }
	        //System.out.println(s);
	    }
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		char s[] = {'h','e','l','l','o'};
		reverseString(s);
		//System.out.println(s);
	}

}
