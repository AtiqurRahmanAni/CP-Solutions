import java.util.*;
 
public class Main {
 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n,cnt=0,j;
        String s,ans="";
        n = sc.nextInt();
        sc.nextLine();
        s = sc.nextLine();
        for (int i = 0; i < s.length(); i=j) 
        {
            for(j=i;j<=cnt+i;j++)
            {
                
            }
            ans+=s.charAt(j-1);
            cnt++;
            if(j==s.length()-1)
                break;
        }
        System.out.println(ans);
    }
}