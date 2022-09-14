import java.util.*;
 
public class Main {
 
    public static void main(String[] args) {
       Scanner sc=new Scanner(System.in);
       long two,three,five,six;
       two=sc.nextLong();
       three=sc.nextLong();
       five=sc.nextLong();
       six=sc.nextLong();
       if(five==0 || six==0)
       {
           System.out.println(Math.min(two,three)*32);
       }
       else
       {
           long ans=256*Math.min(two,Math.min(five, six));
           long mini=Math.min(two,Math.min(five, six));
           two-=mini;
           five-=mini;
           six-=mini;
           ans+=(32*Math.min(two, three));
           System.out.println(ans);
       }
    }
}