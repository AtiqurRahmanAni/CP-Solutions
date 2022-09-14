a,b,n = input().split()
n=int(n)
b=int(b)
a=int(a)
cnt=0
s=a;
for j in range(10):
    s=(a*10)+j
    if s%b==0:
        a=s
        cnt=1
        break
    else:
        s=a
n=n-1
if cnt==1:
    print(a,end="")
    for i in range(n):
        print(0,end="")
    print("")
else:
    print(-1)