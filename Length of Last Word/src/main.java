import java.util.Iterator;

public class main {

	public static void main(String[] args) {
		
		Solution s=new Solution();
	int out =s.lengthOfLastWord("\"   fly me   to   the moon  ");
			System.out.println(out);

	}

}


class Solution {
	public int lengthOfLastWord(String s) {
		String temp="";
		boolean flag=false;
		for(int i=s.length()-1;i>=0;i--) {
			char c= s.charAt(i);
			if(c==' ') {
				if(flag==true) {
					break;
				}
				continue;
			}
			else {
			temp+=c;
			flag=true;
			}
		
			
		}
    	
		return temp.length();
        
    }
}
