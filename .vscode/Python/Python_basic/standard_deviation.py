import statistics as stat
num=[8, 12, 16, 20]
size=len(num)
sum=0
for i in range(size):
    sum+=num[i]

mean=sum/size
dev_sum=0

for j in range(size):
    deviation=(num[j]-mean)**2
    dev_sum+=deviation

variance=dev_sum/size
standard_deviation=variance**0.5

fun_sd=stat.pstdev(num)

print("The standard deviation is: ", standard_deviation)
print("The standard deviation using function is: ",fun_sd)