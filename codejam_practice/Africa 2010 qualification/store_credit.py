'''Qualification round africa 2010 Problem A'''

def output(result,c):
	for i in range(int(c[0])):
		print "Case #"+str(i+1)+": "+str(result[i][0])+" "+str(result[i][1])

def calc(result,t,arr,i,credit):
	k=0
	j=0
	new=[]
	for k in range(i):
		for j in range(k+1,i):
			if (int(arr[0][k]) + int(arr[0][j]) == credit):
				new.append(k+1)
				new.append(j+1)
				result.append(new)
				return
			
	
def take(c):
	result=[]
	t=0
	
	while (t<int(c[0])):
		credit = int(c[3*t+1])
		i = int(c[3*t+2])
		
		arr=[]
		
		arr.append(c[3*t+3].split())
		calc(result,t,arr,i,credit)
		t+=1
	output(result,c)
				
     
       
Ifile=open('A-large-practice.in','r',0)
c = Ifile.read().split('\n')
take(c)
