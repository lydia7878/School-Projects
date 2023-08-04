n = int(input("Input a number n for the nth term of the Fibonacci Sequence: \n"))

print("\n")
a = 1
b = 1
print(a)
if (n == 1):
  exit()

print(b)
if (n == 2):
  exit()

n = n - 2
while (n >= 1):
  c = b + a
  print(c)
  a = b
  b = c
  n = n - 1