import statistics as stat

num=[6,3,8,8,1,6,8,1,6]
size=len(num)
mode__freq=0
mode=0
for i in range (size):
    freq=1
    for j in range (size):
        if num[i]==num[j] and i!=j :
            freq+=1
    if(freq>mode__freq and num[i]!=mode):
        mode__freq=freq
        mode=num[i]

mode2=stat.mode(num)
print("The Mode is: ",mode)
print("The function mode is: ",mode2)