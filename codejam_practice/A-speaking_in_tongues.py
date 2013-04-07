# Google code jam 2012, Qualification round Problem A
def encrypt(f,f1):
	dict={'a':'y','b':'h','c':'e','d':'s','e':'o','f':'c', \
	      'g':'v','h':'x','i':'d','j':'u','k':'i','l':'g', \
              'm':'l','n':'b','o':'k','p':'r','q':'z','r':'t', \
              's':'n','t':'w','u':'j','v':'p','w':'f','x':'m', \
              'y':'a','z':'q',' ':' ','\n':'\n'}
	test = int(f.readline())
	t=0
	while (t<test):
		msg = f.readline()
		f1.write('Case #%d: ' % (t+1,))
		for i in msg:
			f1.write(dict.get(i))
	        t+=1	


f = open(raw_input("Enter the input file name : "),'r',0)
f1 = open(raw_input("Enter the output file name : "),'w',0)
encrypt(f,f1)

