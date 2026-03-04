num=638745
size=len(str(num))
reverse=0

for i in range(size):
    reverse=(num%10)+ reverse*10
    num=int(num/10)

print("The reverse is: ",reverse)
    