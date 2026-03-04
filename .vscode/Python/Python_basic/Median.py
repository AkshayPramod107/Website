import statistics
num=[7, 3, 9, 1, 5]

size=len(num)

for i in range(size):
    for j in range(i+1,size):
        if num[i]>num[j]:
            num[i],num[j]=num[j],num[i]
print(num)
if size%2==1:
    print("The median is: ",num[size//2])
else:
    median1=num[size//2]
    median2=num[size//2-1]
    median=(median1+median2)/2
    print("The median2 is: ",median)

fun_median=statistics.median(num)

print("The median using fuction is: ",fun_median)