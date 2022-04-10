
import java.util.HashMap;

import java.util.Map;
import java.util.Map.Entry;
import java.util.PriorityQueue;

public class main {

	public static void main(String[] args) {
		int k=2;
		int freq[]=new int[1000000];
		int output[]=new int[k];
		for (int i =0 ;i<freq.length;i++) {
			freq[i]=0;
		}
		int nums[]= {4,1,-1,2,-1,2,3};
				
	HashMap<Integer,Integer>map=new HashMap<Integer, Integer>();
	

		for (int i:nums) {
			map.put(i,map.getOrDefault(i,0)+1);
		}
        PriorityQueue<Map.Entry<Integer,Integer>> pq = new PriorityQueue<>((a,b)->(b.getValue()-a.getValue()));;
        for (Entry<Integer, Integer> entry : map.entrySet()) {
           
        	pq.add(entry);
        }
        int x=0;
      for(int i=k-1;i>=0;i--){
		output[x]=pq.poll().getKey();
		x++;
}

	}

}
