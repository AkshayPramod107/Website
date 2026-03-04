import numpy as np
num=[25, 10, 45, 30, 5]
size=len(num)
largest=smallest=num[0]
for i in range(size):
    if num[i]>largest:
        largest=num[i]
    if num[i]<smallest:
        smallest=num[i]

range=largest-smallest

fun_range=np.ptp(num)
print("The range is: ",range)
print("The range using function is: ",fun_range)