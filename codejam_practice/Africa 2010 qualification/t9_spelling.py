''' Qualification Round Africa 2010 Problem C'''
import string
def typeIn(f,f1):
	'''
	takes two files as parameter reads input from f
        and writes to f1
        converts the text into number as you type in mobile
        '''
        charDict = {}
	#inializing char dictionary to store the characters and corresponding keys
	c = 2
	char=string.ascii_lowercase
	for i in range(0,13,3):
		charDict[char[i]]=str(c)
		charDict[char[i+1]]=str(c)+str(c)
		charDict[char[i+2]]=str(c)+str(c)+str(c)
		c+=1
        charDict['p']='7'
	charDict['q']='77'
	charDict['r']='777'
	charDict['s']='7777'
	charDict['t']='8'
	charDict['u']='88'
	charDict['v']='888'
	charDict['w']='9'
	charDict['x']='99'
	charDict['y']='999'
	charDict['z']='9999'


	charDict[' ']=str(0)
        charDict['\n']='*'
        test = int(f.readline())
        t=0
        while(t<test):
		msg = f.readline()
		f1.write('Case #'+str(t+1)+': ')
		for i in range(len(msg)-1):
			f1.write(str(charDict[msg[i]]))
			if charDict[msg[i]][0]==charDict[msg[i+1]][0]:
				f1.write(' ')
		f1.write('\n')
		t+=1	

f= open(raw_input("Enter the input file name : "),'r',0)
f1=open(raw_input("Enter the output file name : "),'a',0)
typeIn(f,f1)

