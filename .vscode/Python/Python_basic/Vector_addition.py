import numpy as np

num = [1,2,3,4,5]
num1= [6,7,8,9,10]

f_num =np.array([1,2,3,4,5])
f_num1=np.array([6,7,8,9,10])
size=len(num)

result=[0]*size

f_result=f_num+f_num1

for i in range(size):
    result[i]=num[i]+num1[i]

print("The vector addition result is: ",result)
print("The vector addition result using function is: ",f_result)