n=4

for i in range(1,n+1):
    num=1
    for j in range(1,(2*n)):
        if j>=5-i and j<=i+3:
            print(num,end=" ")
            num+=1 if j<n else -1
        else:
            print("  ",end="")
    print()

# i=1 j>=5-i <=i+3
# i=2 j>=3 <=5
# i=3 j>=2 <=6



