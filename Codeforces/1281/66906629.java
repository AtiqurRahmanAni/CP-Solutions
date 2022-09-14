import java.util.Scanner;
 
public class Main {
 
    public static void main(String[] args) {
       Scanner sc=new Scanner(System.in);
       int t;
       String s;
       t=sc.nextInt();
       sc.nextLine();
      for(int i=1;i<=t;i++)
      {
          s=sc.nextLine();
          if(s.endsWith("desu")||s.endsWith("masu"))
          {
              System.out.println("JAPANESE");
          }
          else if(s.endsWith("mnida"))
          {
              System.out.println("KOREAN");
          }
          else if(s.endsWith("po"))
          {
              System.out.println("FILIPINO");
          }
      }
    }
}