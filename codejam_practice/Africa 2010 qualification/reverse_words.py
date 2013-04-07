''' Qualification Round Africa 2010 Problem B'''
def reverse(f,f1):
	'''Takes two file objects one for reading and other for writing
	reads string from f and reverse the words then store in f1
	'''
	t=0
	string=[]
	ntext=''
	num=int(f.readline())
	while (t<num):
		ntext=''
		string = []
		string=(f.readline()).split()
		string.reverse()
		for i in string:
			ntext += i + ' '
		f1.write('Case #'+str(t+1)+': '+ntext+'\n')
		t+=1

rpath='B-large-practice.in'
wpath='B-output-large.txt'		
f = open(rpath,'r')
f1= open(wpath,'a')
reverse(f,f1)
