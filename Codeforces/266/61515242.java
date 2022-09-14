import java.util.Scanner;
import java.util.Arrays;
public class Main {
 
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int i,j,n,sec;
        String s;
        n=sc.nextInt();
        sec=sc.nextInt();
        sc.nextLine();
        s=sc.nextLine();
        char ara[]=s.toCharArray();
        for(i=1;i<=sec;i++)
        {
            for(j=0;j<ara.length-1;j++)
            {
                if(ara[j]=='B' && ara[j+1]=='G')
                {
                    ara[j]='G';
                    ara[j+1]='B';
                    j++;
                }
            }
        }
        String str=new String(ara);
        prln(str);
            
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