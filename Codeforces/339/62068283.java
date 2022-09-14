import java.util.Scanner;
import java.util.Arrays;
public class Main {
 
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int i,j,ind=0;
        String s,s1;
        char[] ara=new char[150];
        char ch;
        s=sc.nextLine();
        StringBuffer sb=new StringBuffer();
        for(i=0;i<s.length();i++)
        {
            if(s.charAt(i)!='+')
            {
                ara[ind++]=s.charAt(i);
            }
        }
        for(i=0;i<ind-1;i++)
        {
            for(j=i+1;j<ind;j++)
            {
                if(ara[i]>ara[j])
                {
                    ch=ara[i];
                    ara[i]=ara[j];
                    ara[j]=ch;
                }
            }
        }
        for(i=0;i<ind;i++)
        {
            pr(ara[i]);
            if(i!=ind-1)
                pr('+');
        }
        prln("");
        
            
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