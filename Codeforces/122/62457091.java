import java.util.Scanner;
 
public class Main {
 
    public static void main(String[] args) {
        int i,t,j,sum1,sum2,sum3,a,b,c=0;
        
        Scanner sc=new Scanner(System.in);
        //int[] ara=new int[11];
        int ara[]={4,7,47,74,444,447,477,744,747,777,774};
        a=sc.nextInt();
        for(i=0;i<=10;i++)
        {
            if(a==ara[i]||a%ara[i]==0)
            {
                c=1;
                break;
            }
        }
        if(c==1)
            System.out.println("YES");
        else
            System.out.println("NO");
        
    }
    
}