list=[1,2,3,4,3,2]
size=len(list)

for i in range(size):
    for j in range(i+1,size):
        if list[i]==list[j]:
            for k in range(j,size-1):
                list[k]=list[k+1]
            size-=1
            j-=1

