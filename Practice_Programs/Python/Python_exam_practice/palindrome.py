temp=num=122
reverse=0
for i in str(num):
    reverse=int(temp)%10+reverse*10
    temp=temp//10

if reverse==int(num):
    print("Palindrome")
else:
    print("not palindrome")
