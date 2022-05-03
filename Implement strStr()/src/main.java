
public class main {
	   public static int strStr(String haystack, String needle) {
		   if(haystack.equals(needle)) {
			   return 0;
		   }
	       for(int i=0;i<haystack.length()-needle.length();i++) {
	    	   String temp="";
	    	   for(int j=i;j<needle.length()+(i);j++) {
	    		  temp=temp+haystack.charAt(j);
	    	   }
	    	   if(temp.equals(needle)) {
	    		   return i;
	    	   }
	    	   System.out.println(temp+ " ");
	       }
		   
		   
		   return -1;
	    }
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String haystack="abc";
		String needle= "c";
		int output=strStr(haystack, needle);
		System.out.println(output);
	}

}
