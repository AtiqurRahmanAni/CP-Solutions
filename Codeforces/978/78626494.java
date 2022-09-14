import java.util.*;
 
public class Main {
 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n, ans = 0, cnt = 0;
        String s;
        n = sc.nextInt();
        sc.nextLine();
        s = sc.nextLine();
        for (int i = 0; i < s.length(); i++) 
        {
            if(s.charAt(i)=='x')
            {
                cnt++;
                if(cnt>=3)
                    ans++;
            }
            else if(s.charAt(i)!='x')
                cnt=0;
        }
        System.out.println(ans);
    }
}