import numpy as np

num=np.array([[1,2],[3,4]])
num1=np.array([[5,6],[7,8]])

f_num=[[1,2],[3,4]]
f_num1=[[5,6],[7,8]]

row_size=len(num[0])
col_size=len(num)


result=[[0 for j in range(col_size)]for i in range(row_size)]


for i in range (2):
    for j in range(2):
        result[i][j]=num[i][j]+num1[i][j]
print(result)

