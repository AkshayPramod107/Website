# first_ace_prob=4/52
# second_ace_prob=3/51

# two_ace_prob=first_ace_prob*second_ace_prob

# print("The probability of drawing two Aces is: ",two_ace_prob)



# Integers are immutable
x = 5
print(f"ID before change: {id(x)}")
x = x + 10 # This creates a NEW integer object, the original 5 is unchanged
print(f"ID after change: {id(x)}")
# The IDs will be different, demonstrating a new object was created.

# Strings are immutable
s = "hello"
# s[0] = "H" # This would raise a TypeError
s += " world" # This creates a NEW string object
print(s)

# Tuples are immutable
t = (1, 2, 3)
# t[0] = 10 # This would raise a TypeError
