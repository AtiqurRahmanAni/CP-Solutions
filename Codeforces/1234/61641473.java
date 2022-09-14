//package main;
import java.util.Scanner;
import java.util.Arrays;
public class Main {
 
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
       int t,i;
       long sum,avg,n,x,ans;
       t=sc.nextInt();
        for(i=1;i<=t;i++)
        {
            sum=0;
            n=sc.nextLong();
            for(int j=1;j<=n;j++)
            {
                x=sc.nextLong();
                sum+=x;
            }
            ans=(long)(Math.ceil((double)sum/n));
            prln(ans);
        }
        
            
    }
    static void prln(Object a)
    {
        System.out.println(a);
    }
    static void pr(Object a)
    {
        System.out.print(a);
    }
    
}