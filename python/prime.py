i=99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999
while(1):
	j=2
	c=1
	while j <  i/2:
		if i % j == 0: 
			#i +=1
			c=0
			break
		j += 1
	if c == 1:
		print("prime number ",i)
	i+=2
			