import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

public class main {
	
    public static List<List<String>> groupAnagrams(String[] strs) {
    	int i=0;
        HashMap<String, List<String>> map = new HashMap<>();
        	for(String s:strs) {
        		char[] chars = s.toCharArray();
        		Arrays.sort(chars);
        		String temp=new String (chars);
        		if (map.containsKey(temp)==false) {
        			map.put(temp, new ArrayList<>());
        		}
        		
        		map.get(temp).add(s);
        
     
        	}
        	List<List<String>>output=new ArrayList<List<String>>();
      for (Map.Entry<String, List<String>> entry : map.entrySet()) {
    	  output.add(entry.getValue());
		
	}
    	return output;
    }
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String arr[]={"eat","tea","tan","ate","nat","bat"};
		List<List<String>>outpt=new ArrayList<List<String>>();
		outpt=groupAnagrams(arr);
		System.out.println(outpt);
	}

}
