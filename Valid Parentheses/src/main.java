import java.util.Stack;

public class main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

	}

}
class Solution {
    public boolean isValid(String s) {
        Stack<Character> stack = new Stack<Character>();
        
        for(int i=0; i<s.length(); i++) {
            
            char curr = s.charAt(i);
            
            if( curr == '(' || curr == '{' || curr == '[' ) {
                stack.push(curr);
            } else if( stack.isEmpty() ) {
                return false;
            } else {
                char last = stack.pop();
                
                if( 
                    (last == '(' && curr != ')') ||
                    (last == '{' && curr != '}') ||
                    (last == '[' && curr != ']') ) {
                    return false;
                }
            }
        }
        
        return stack.isEmpty();
    }
}
