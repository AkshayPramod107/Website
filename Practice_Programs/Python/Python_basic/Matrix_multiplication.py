import numpy as np

num=[[1,2],[3,4]]
num1=[[5,6],[7,8]]

f_num=np.array([[1,2],[3,4]])
f_num1=np.array([[5,6],[7,8]])

row_size_1=len(num)
col_size_1=len(num[0])

row_size_2=len(num1)
col_size_2=len(num1[0])

if col_size_1==row_size_1:
    result=[[0 for j in range(col_size_2)] for i in range(row_size_1)]
    for i in range(row_size_1):
        for j in range(col_size_2):
            sum=0
            for k in range(col_size_1):
                sum+=(num[i][k]*num1[k][j])
            result[i][j]=sum
print("The result: ",result)

f_result=np.dot(f_num,f_num1)

print("The result using function: ",f_result)