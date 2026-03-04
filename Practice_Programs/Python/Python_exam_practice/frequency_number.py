list=[1,2,4,7,2,7,9,8,3,6]
size=len(list)
temp=[0]*size
for i in range(size):
    freq=1
    flag=0
    for j in range(size):
        if list[i]==list[j] and list[i] not in temp and i!=j:
            freq+=1
            flag=1
    if list[i] not in temp:
        print("Frequency of ",list[i]," is: ",freq)
    if flag==1:
        temp[i]=list[i]