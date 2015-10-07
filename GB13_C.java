import java.io.*;
import java.math.*;
import java.util.*;

public class GB13_C{
	public static void main(String[] args) throws Exception{
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(in.readLine());
		int i = 0;

		String s = in.readLine();
		String[] sValue = new String[n];
		sValue = s.split(" ");
		int[] L = new int[n];
		for(i = 0; i < n;i++){
			L[i] = Integer.parseInt(sValue[i]);
		}
		Set<Integer> set =  new HashSet<Integer>();
		for(i = 0;i < n; i++)
		{
			if(i != n-1)
				if(set.add(L[i])) {
					System.out.print(L[i]+" ");
				}
				else{
					while(!set.add(L[i]+1)){
						L[i] += 1;
					}
					System.out.print(L[i] + 1 +" ");
				}
			else{
				if(set.add(L[i])) {
					System.out.println(L[i]);
				}
				else{
					while(!set.add(L[i]+1)){
						L[i] += 1;
					}
					System.out.println(L[i] + 1);
				}
			}		
		}
	}
}