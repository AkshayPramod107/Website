import numpy as np
num=[6, 2, 8, 4, 10, 12, 14, 16]

size=len(num)

for i in range(size):
    for j in range(i+1,size):
        if num[i]>num[j]:
            num[i],num[j]=num[j],num[i]
pos=size//2
if size%2==1:
    q2=num[pos]
    lower=num[:pos]
    upper=num[pos+1:]
else:
    q2=((num[size//2]+num[size//2-1])/2)
    lower=num[:pos]
    upper=num[pos:]

l_size=len(lower)
u_size=len(upper)

if l_size%2==0 and u_size%2==0:
    q1=(lower[(l_size//2)] + lower[(l_size//2-1)])/2
    q3=(upper[(u_size//2)] + upper[(u_size//2-1)])/2
else:
    q1=lower[l_size//2]
    q3=upper[u_size//2]

iqr=q3-q1
print("Q1 =",q1,"Q2 =",q2,"Q3 =",q3,"and IQR =",iqr)

f_q1=np.percentile(num,25,method='midpoint')
f_q2=np.percentile(num,50,method='midpoint')
f_q3=np.percentile(num,75,method='midpoint')

f_iqr=f_q3-f_q1

print("Using function Q1 =",f_q1,"Q2 =",f_q2,"Q3 =",f_q3,"and IQR =",f_iqr)
