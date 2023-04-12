a=[1,3,2,4,7,6,9,10]
n=len(a)
temp=[0]*n
print(temp)
j=0
for i in range(n):
    if(a[i]%2==0):
        temp[j]=a[i]
        j=j+1
for i in range(n):
    if(a[i]%2!=0):
        temp[j]=a[i]
        j=j+1

print(temp)