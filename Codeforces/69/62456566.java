import java.util.Scanner;
 
public class Main {
 
    public static void main(String[] args) {
        int i,t,j,sum1,sum2,sum3,a,b,c;
        sum1=sum2=sum3=0;
        Scanner sc=new Scanner(System.in);
        t=sc.nextInt();
        for(i=1;i<=t;i++)
        {
            a=sc.nextInt();
            sum1+=a;
            b=sc.nextInt();
            sum2+=b;
            c=sc.nextInt();
            sum3+=c;
        }
        if(sum1==0&&sum2==0&&sum3==0)
            System.out.println("YES");
        else
            System.out.println("NO");
        
    }
    
}