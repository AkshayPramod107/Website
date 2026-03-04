Num=int(input("Enter a number: "))

for i in range (1,Num):
    if(Num%i==0):
        print("Not prime.")
        break
    else:
        print("Prime number.")
