num=[4,1,2,1,2,5] 
size=len(num) 

for i in range (size): 
    flag=0 
    for j in range (size): 
        if num[i]==num[j] and i!=j: 
            flag=1 
            break 
    if flag==0: 
        print(num[i],end=" ")