import java.util.*;
import static java.util.Arrays.sort;
 
public class Main {
 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n,i;
        n=sc.nextInt();
        int ara[]=new int[n];
        for(i=0;i<n;i++)
        {
            ara[i]=sc.nextInt();
        }
        sort(ara);
        int ans=0;
        for(i=0;i<n;i+=2)
        {
            ans+=((ara[i+1]-ara[i]));
        }
        System.out.println(ans);
    }
}