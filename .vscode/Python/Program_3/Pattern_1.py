number=[7, 12, 13, 18, 11, 20, 9]
size=7
for i in range (0,size):
    flag=0
    n=number[i]
    if number[i]==0 or number[i]==1:
        flag=1
    else:
        for j in range (2,int((n/2)+1)):
            if number[i]%j==0:
                flag=1
                break
    if flag==0 :
        number[i]=-1
    if number[i]<0 :
        for k in range (i,size-1):
            number[k]=number[k+1]
        i-=1
        size-=1
for l in range (0,int(size/2)):
    temp=number[l]
    number[l]=number[size-l-1]
    number[size-l-1]=temp
for k in range (0,size):
    print(number[k],end=" ")