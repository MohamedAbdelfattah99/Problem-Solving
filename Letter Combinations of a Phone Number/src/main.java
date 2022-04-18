import java.util.ArrayList;
import java.util.List;

public class main {
    public static String[] letters = {"", "", "abc", "def", "ghi","jkl", "mno", "pqrs", "tuv", "wxyz"};
	 public static  List<String> ans = new ArrayList<>();

	 public static List<String> letterCombinations(String digits) {
	        if(digits.equals("")) {
	            return new ArrayList();
	        }
	        Keypad(digits, "", 0);
	        return ans;
	    }
	    
	    public static void Keypad(String input, String output, int ind) {
	        
	        if(ind == input.length()) {
	            ans.add(output);
	            return;
	        }
	        
	        char ch = input.charAt(ind);
	        int a = Character.getNumericValue(ch);
	        String word = letters[a];
	        
	        for(int i=0; i<word.length(); i++) {
	            Keypad(input, output+word.charAt(i), ind+1);
	        }
	        
	        return;
	        
	    }   
	    
	public static void main(String[] args) {

		List<String>res=letterCombinations("2");
		System.out.println(res);
    }
				 
	}


