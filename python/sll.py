class LinkedList:
	'''Single linked list'''
	class __Node:
		'''private node object. '''
		def __init__(self,element=None):
			self.element = element
			self.next = None
		
		def __str__(self):
			return str(self.element)

		def hasNext(self):
			return self.next!=None

		def getNext(self):
			return self.Next
		
		def getElement(self):
			return self.element

		def setNext(self,nextItem):
			self.next = nextItem

		def setElement(self,element):
			self.element = element
	
	def __init__(self):
		self.first=LinkedList.__Node()
		self.length = 0

	def __len__(self):
		return self.length

	def isEmpty(self):
		return self.length == 0

	def addToFront(self,element):
		toAdd = LinkedList.__Node(element)
		toAdd.setNext(self.first.getNext())
		self.first.setNext(toAdd)
		self.length += 1

	def popFront(self):
		if self.length > 0:
			val = self.first.getNext().getElement()
			self.first.setNext(self.first.getNext().getNext())
			self.length -= 1
			return val
		else:
			raise IndexError("pop from an empty list")

	def append(self,element):
		currentNode = self.first
		while currentNode.hasNext():
			currentNode = currentNode.getNext()
		currentNode.setNext(LinkedList.__Node(element))
		self.length += 1

	

		

