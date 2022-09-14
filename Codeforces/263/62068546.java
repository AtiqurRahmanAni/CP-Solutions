import java.util.Scanner;
import java.util.Arrays;
public class Main {
 
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int i,j,pos,row=0,col=0,n;
        for(i=1;i<=5;i++)
        {
            for(j=1;j<=5;j++)
            {
                n=sc.nextInt();
                if(n==1)
                {
                    row=i;
                    col=j;
                }
            }
        }
        prln(Math.abs(3-row)+Math.abs(3-col));
            
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