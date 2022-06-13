# Python program to find all combinations under given constraints

def function(candidates, add):
	result = []
	m = []

	# Sorting the List and removing the duplicates using Set
	candidates = sorted(list(set(candidates)))
	Num(result, candidates, m, add, 0)
	return result

def Num(result, candidates, m, add, index):
	
	if(add == 0):
		
		# Adding copy of list to result
		result.append(list(m))
		return
	
	# Iterating from index to len(candidates) - 1
	for i in range(index, len(candidates)):

		# Checking that sign of add
		if(add - candidates[i]) >= 0:

			# Adding element which to contribute in add
			m.append(candidates[i])
			Num(result, candidates, m, add-candidates[i], i)

			# Removing element from list
			m.remove(candidates[i])


# Main Code
candidates = []
n = int(input("Enter the number of candidates:"))
add = int(input("Enter target:"))
for a in range(0,n):
    element = int(input("Enter candidate:"))
    candidates.append(element) #adding every candidate in candidates
result = function(candidates, add)

# If output is empty
if len(result) <= 0:
	print("empty")
	
# Printing sored results
for i in range(len(result)):

	print("(", end=' ')
	for j in range(len(result[i])):
		print(str(result[i][j])+" ", end=' ')
	print(")", end=' ')
