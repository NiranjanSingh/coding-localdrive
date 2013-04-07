def create(a,o,b):
  return '('+a+o+b+')'

s = raw_input()

p= ['(','^','/','*','+','-']
for c in s:
 if c in p:
  result = create(s[s.index(c)-1],c,s[s.index(c)+1])
print result
