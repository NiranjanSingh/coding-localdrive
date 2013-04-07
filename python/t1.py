def a(x,y,z):
	print x>y
	print y>z
	return 10
#print()

def b():
    n=raw_input("Enter your name  ")
    print n
    a(True,False,n)
    
def c():
    print a
    print b
    print c
    a(a,b,c,)
    
c()
