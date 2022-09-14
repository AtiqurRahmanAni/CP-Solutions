import java.util.*;
 
public class Main {
 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t,i,j;
        t=sc.nextInt();
        sc.nextLine();
        for(int test=1;test<=t;test++)
        {
            String s;
            int cnt=0,ans=0;
            s=sc.nextLine();
            for(i=0;i<s.length();i++)
            {
                if(s.charAt(i)=='1')
                {
                    for(j=i+1; j<s.length() && s.charAt(j)!='1';j++)
                    {
                        cnt++;
                        if(j==s.length()-1)
                            cnt=0;
                    }
                }
                ans+=cnt;
                cnt=0;
            }
            System.out.println(ans);
        }
    }
}