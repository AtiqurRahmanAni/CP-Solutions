import java.util.Scanner;
import java.util.Arrays;
public class Main {
 
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int cnt1=0,cnt2=0,flag=0;
        
        String s;
        s=sc.nextLine();
        for(int i=0;i<s.length();i++)
        {
            if(s.charAt(i)=='0')
            {
                cnt1++;
                cnt2=0;
                if(cnt1>=7)
                {
                    flag=1;
                    break;
                }
            }
            else if(s.charAt(i)=='1')
            {
                cnt2++;
                cnt1=0;
                if(cnt2>=7)
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1)
            prln("YES");
        else
            prln("NO");
        
            
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