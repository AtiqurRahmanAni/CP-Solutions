 
 
 
 
n=int(input())
ara=[int(i) for i in input().split()]
maxi=0
for x in ara:
    if(x>maxi):
        maxi=x
sum=0
for x in ara:
    sum=sum+(maxi-x)
print(sum)