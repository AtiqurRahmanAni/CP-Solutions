import java.util.*;
 
public class Main {
 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t,buns,patis,cutlets,hamburger,chicken;
        t=sc.nextInt();
        for(int test=1;test<=t;test++)
        {
            int ans1=0,ans2=0,ans3=0;
            buns=sc.nextInt();
            patis=sc.nextInt();
            cutlets=sc.nextInt();
            hamburger=sc.nextInt();
            chicken=sc.nextInt();
            if(patis*2+cutlets*2<=buns)
            {
                System.out.println(hamburger*patis+chicken*cutlets);
            }
            else
            {
                int buns1=buns;
                ans1=Math.min(buns/2, patis)*hamburger;
                if(buns/2>=patis)
                    buns-=(patis*2);
                else
                {
                    buns-=(buns*2);
                    if(buns<0)
                        buns=0;
                }
                ans1+=(Math.min(buns/2,cutlets)*chicken);
                ans2=Math.min(buns1/2, cutlets)*chicken;
                //System.out.println(ans2);
                if(buns1/2>=cutlets)
                    buns1-=(cutlets*2);
                else
                {
                    buns1-=(buns1*2);
                    if(buns1<0)
                        buns1=0;
                }
                ans2+=(Math.min(buns1/2, patis)*hamburger);
                System.out.println(Math.max(ans1,ans2));
            }
        }
    }
}