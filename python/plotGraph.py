import pylab

i=j=0
while i<100:
 pylab.plot([i,i],[0,100])
 i += 5 
while j<100:
 pylab.plot([0,100],[j,j])
 j += 5
 

pylab.show()
