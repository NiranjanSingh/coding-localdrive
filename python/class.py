class student:
	#roll =0
	#mark =0
	def __init__(self,roll =1):
		self.roll = roll
	def marks(self,mark):
		self.mark=mark
	def calc(self):
		return self.mark * 2 
	def view(self):
		print "Roll number : " +  str(self.roll)
		print "Marks out of 50 : " + str(self.mark)
		print "Percentage calcutaion : " +  str(self.calc())
c=input("Enter how many students : ")
st1= []
i=0
while(i<c):
	st1.append(student(input("Enter roll number : ")))
	i += 1
	st1[i-1].marks(input("Enter marks  out of 50: "))
	
i=0
while(i<c):
	st1[i].view()
	i += 1

