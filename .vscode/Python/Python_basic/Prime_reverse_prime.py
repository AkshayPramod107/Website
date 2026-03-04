a=10
b=100

for i in range (a,b):
    flag=0
    for j in range (2,int(i/2+1)):
        if i%j==0:
            flag=1
            break
    if flag==0:
        reverse=0
        prime_flag=0
        num=i
        for k in str(num):
            reverse= num%10 + reverse * 10
            num=int(num/10)
        for l in range (2,int(reverse/2+1)):
            if reverse%l==0:
                prime_flag=1
                break
        if prime_flag==0:
            print(i,end=" ")