import math
t=input()
while(t>0):
  n=input()
  r=input()
  print ((math.factorial(n))/(math.factorial(n-r)*math.factorial(r)))%1000000009
  t-=1
