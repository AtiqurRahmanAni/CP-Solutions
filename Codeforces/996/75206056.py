 
 
 
n=int(input())
ans=0
ans=ans+int(n/100)
rem=n%100
ans=ans+int(rem/20)
rem=rem%20
ans=ans+int(rem/10)
rem=rem%10
ans=ans+int(rem/5)
rem=rem%5
ans=ans+rem
print(ans)