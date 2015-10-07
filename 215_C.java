import java.util.*;
import java.io.*;

public class Main{
	public static void main(String[] args) throws Exception{
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int i=0,j=0;
		int sCheck='x'+'y'+'z';
		String s=in.readLine();
		int m=Integer.parseInt(in.readLine());
		for(i=0;i<m;i++)
		{
			String lr=in.readLine();
			String[] lrs=lr.split(" ");
			int l=Integer.parseInt(lrs[0]);
			int r=Integer.parseInt(lrs[1]);

			for(j=l;j<=r-3;j++)
			{
			//	if(s.substring(j,j+3)=="zyx"  xzy yxz)
				int sum=s.charAt(j)+s.charAt(j+1)+s.charAt(j=2);
				if(sum==sCheck)
				{
					System.out.println("YES");
				}
				else System.out.println("NO");
			}
		}
	}
}
