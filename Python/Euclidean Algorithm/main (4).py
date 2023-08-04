print("This program will calculate the Greatest Common Denominator between two integers.\n")
int1 = int(input("Enter the first integer: "))
int2 = int(input("Enter the second integer: "))

lock = 1
while(lock == 1):

  if(int1 == 0):
    print("The GCD is: ")
    print(int2)
    lock = 0

  elif(int2 == 0):
    print("The GCD is: ")
    print(int1)
    lock = 0

  else:
    Q = int1//int2
    R = int1%int2
    int1 = int2
    int2 = R