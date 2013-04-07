def numPens(n):
    if n>27:
	print False
    if n < 5:
        print False
    if n % 8 == 0 or n % 5 == 0:
        print True
    else:
        return numPens(n-8) or numPens(n-5)
while((x=input())!=int(*)):
    numPens(x)
