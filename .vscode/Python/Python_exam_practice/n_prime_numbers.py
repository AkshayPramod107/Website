num=int(input("Enter a number:"))
count=0
i=2
while count<num :
    flag=0
    for j in range (2,int(i/2+1)):
        if i%j==0:
            flag=1
            break
    if flag==0:
        print(i,end=" ")
        count+=1
    i+=1
