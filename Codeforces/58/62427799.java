import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.util.Scanner;
import java.util.Arrays;
 
public class Main {
 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s;
        int i,j,k,cnt;
        cnt=k=0;
        String s1="hello";
        s = sc.nextLine();
        for(i=0;i<s1.length();i++)
        {
            for(j=k;j<s.length();j++)
            {
                if(s.charAt(j)==s1.charAt(i))
                {
                    cnt++;
                    k=j+1;
                    break;
                }
            }
        }
        if(cnt==5)
            prln("YES");
        else
            prln("NO");
    }
 
    static void prln(Object a) {
        System.out.println(a);
    }
 
    static void pr(Object a) {
        System.out.print(a);
    }
 
}