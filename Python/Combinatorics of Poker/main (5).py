import math

def ncr(n, r):
  return math.factorial(n) / (math.factorial(r) * math.factorial(n - r))

samplespace = ncr(52, 5)

print("The probability of drawing a royal flush is: \n", (ncr(4, 1) / samplespace) * 100, "%.\n")

print("The probability of drawing a straight flush (excluding royal flush) is: \n", ((ncr(10, 1) * ncr(4, 1) - ncr(4, 1)) / samplespace) * 100, "%.\n")

print("The probability of drawing a four of a kind is: \n", ((ncr(13 , 1) * ncr(4, 4) * ncr(12,  1) * ncr(4, 1)) / samplespace) * 100, "%.\n")

print("The probability of drawing a full house is: \n", ((ncr(13, 1) * ncr(4, 3) * ncr(12 , 1) * ncr(4, 2)) / samplespace) * 100, "%.\n")

print("The probability of drawing a flush (exclusing royal and straight flush) is: \n", ((ncr(13, 5) * ncr(4, 1) - ncr(10, 1) * ncr(4, 1)) / samplespace) * 100, "%.\n")

print("The probability of drawing a straight (excluding royal and straight flush) is: \n", ((ncr(10, 1) * ncr(4, 1) ** 5 - ncr(10, 1) * ncr(4, 1)) / samplespace) * 100, "%.\n")

print("The probability of drawing a three of a kind is: \n", ((ncr(13, 1) * ncr(4, 3) * ncr(12, 2) * ncr(4, 1) ** 2)/ samplespace) * 100, "%.\n")

print("The probability of drawing a two pair is: \n", (ncr(13, 2) * ncr(4, 2) ** 2 * ncr(11, 1) * ncr(4, 1) / samplespace) * 100, "%.\n")

print("The probability of drawing a one pair is: \n", ((ncr(13, 1) * ncr(4, 2) * ncr(12, 3) * ncr(4, 1) ** 3) / samplespace) * 100, "%.\n")

print("The probability of drawing a no pair(high card) is: \n", (((ncr(13, 5) - ncr(10, 1)) * (ncr(4, 1) ** 5 - ncr(4, 1))) / samplespace) * 100, "%.\n")