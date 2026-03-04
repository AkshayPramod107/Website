import statistics as stat

num=[8,3,6,8,1,6,8,1,6]
size=len(num)

sum=0
for i in range (size):
    sum+=num[i]

mean=int(sum/size)


mean2=int(stat.mean(num))
print("The mean is: ",mean)
print("The second method to find mean is: ",mean2)