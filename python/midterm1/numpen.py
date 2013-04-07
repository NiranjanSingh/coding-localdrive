def numPens(n):


  nu=[5,8,24,13,29,32,37]
  if n in nu:
        return True
  
  for i in nu:
  	
  	if n%i == 0:
		print i
		print
  		return True
  	else:

  		
		print str(i) + " remainder : " + str(n%i)
		print
		if (n==n%i):
			return
   		numPens(n%i)
  return False
print numPens(input("Enter num :"))	
