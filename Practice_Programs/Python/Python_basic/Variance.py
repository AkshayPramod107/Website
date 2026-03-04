import statistics as stat

num=[5, 10, 15, 20]
size=len(num)
sum=0
for i in range(size):
    sum+=num[i]
mean=sum/size

dev_sum=0
for j in range(size):
    deviation=(num[j]-mean)**2
    dev_sum+=deviation

varience=dev_sum/size
fun_vari=stat.pvariance(num)
print("The variance is: ",varience)
print("The variance using function is: ",fun_vari)