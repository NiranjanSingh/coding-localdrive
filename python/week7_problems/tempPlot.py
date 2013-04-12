import pylab
def parse(infile):
	low=[]
	high=[]
	line = infile.readline()
	while(line):
		fields = line.split()
		if len(fields) == 3 and fields[0].isdigit():
			low.append(int(fields[1]))
			high.append(int(fields[2]))
		line = infile.readline()

	return((low,high))

def producePlot((lowTemps,highTemps)):
	diffTemps = []
	for i in range(len(highTemps)):
		diffTemps.append(highTemps[i]-lowTemps[i])
	pylab.title("Day by Day Ranges in Temperature in Boston in July 2012")
	pylab.xlabel("Days")
	pylab.ylabel("Difference in Temperature")
	pylab.plot(range(1,32),diffTemps)
	pylab.savefig('L12_P4_graph.png')
	pylab.show()

infile = open('julyTemps.txt')
producePlot(parse(infile))


