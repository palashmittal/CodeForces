import java.util.*;
import java.io.*;
import java.util.Arrays;
public class Main{
	public static void main(String[] args) throws Exception{
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int i=0,j=0;
		String s=in.readLine();
		String[] str = s.split("\\+");

		Arrays.sort(str);
		for(i=0;i<str.length;i++)
		{
			System.out.print(str[i]);
			if(i!=str.length-1)
			{
				System.out.print("+");
			}
			else break;
		}
	}
}
