import numpy as np

num=[1,2,3,4]
num1=[4,5,6,7]

size=len(num)

result=[0]*size
f_num=np.array([1,2,3,4])
f_num1=np.array([4,5,6,7])
dot_prod=0
for i in range(size):
    result[i]=num[i]*num1[i]
    dot_prod+=result[i]

f_dot_prod=np.dot(f_num,f_num1)
print("The dot product: ",dot_prod)

print("The dot product using function: ",f_dot_prod)