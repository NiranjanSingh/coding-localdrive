import math
t=input()
def gcd(a,b):
  if (a%b)==0:
    return b
  else:
    return gcd(b,a%b)
    
while(t>0):
  n=input()
  val1=2*n-2
  val2=2+n*n-n
  f = gcd(val2,val1)
  print str(val2/f - val1/f) +" " +str(val2/f)
  t-=1
  
