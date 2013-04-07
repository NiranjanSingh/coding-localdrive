n = int(raw_input("Enter the size of the array : "))
arr = []

def M_heap(arr,i):

	for j in range(n):
		print(arr[j])
	if i > ((n+1)/2)-1:
		return
	l=0
	if arr[i] < arr[2*i + 1]:
		l = 2*i +1
	else:
		l=i
	
	if i > ((n+1)/2):
		if arr[l] < arr[2*i +2]:
			l = 2*i +2

	if i!=l and l < n:
		arr[i] = arr[i] + arr[l]
		arr[l] = arr[i] - arr[l]
		arr[i] = arr[i] - arr[l]
		M_heap(arr,i)
	return


for i in range(n):
	arr.append(int(raw_input("Enter element : ")))
for i in range(n):
	print(arr[i]);
i=(n+1)/2 - 1
while i >= 0:
	M_heap(arr,i)
	i -= 1

