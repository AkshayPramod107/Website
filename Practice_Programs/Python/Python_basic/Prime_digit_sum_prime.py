a=10
b=110

for i in range (a,b):
    flag=0

    if i==0 or i==1:
        flag=1
    else:
        for j in range (2,int(i/2+1)):
            if i%j==0 :
                flag=1
                break
    if flag==0:
        sum=0
        for k in str(i):
            sum+=int(k)
        prime_flag=0
        for l in range (2,int(sum/2+1)):
            if sum%l==0 :
                prime_flag=1
                break
        if prime_flag==0:
            print(i,end=" ")