import csv

class Node:
	# make an empty node
	def __init__(self):
		self.cargo = None
		self.next = None

class linkedList:
	# initialize the list
	def __init__(self):
		self.head = None

	# add the content to the node then add the node to the linked list
	def newNode(self, text):
		newNode = Node()
		newNode.cargo = text
		newNode.next = self.head
		# add the node to the list
		self.head = newNode

def main():
	# make the nodes from the .csv file and put them into a linked list
	with open('output2.csv', 'r') as csvFile:
		lists = linkedList()
		for row in csvFile:
			diseaseText = repr(row.strip())
			lists.newNode(diseaseText)

	# print the list to the console (currently prints in reverse order of addition to the list)
	currentNode = lists.head
	while currentNode.next != None:
		print currentNode.cargo
		currentNode = currentNode.next

	# print only the diseases beginning with user inputted letter
	print " "
	searchFor = raw_input("Enter a letter to narrow search (A-G): ")
	print " "
	currentNode = lists.head
	while currentNode.next != None:
		if currentNode.cargo[1] == searchFor:
			print currentNode.cargo
		currentNode = currentNode.next
	print " "

if __name__ == "__main__":
	main()