# def maxCoins(self, nums: List[int]) -> int:
import random
random.seed(1)

size = int(input("Enter a integer between 1 and 101: "))
nums = []

for i in range(0,size): # indices for nums vector
    nums.append(random.randint(0, 500)) # choosing a random integer from 0 to 500
print("nums:", nums)

# initially populate 2D array of possible subarray types
Array_points = [[0 for i in range(size)] for j in range(size)]

for subarray_length in range(1,size+1):
    for i in range(0,size - subarray_length + 1):
        j = i + subarray_length - 1
        for k in range(i,j+1):
            leftVal = 1 # needs to be 1 initially
            rightVal = 1 # needs to be 1 initially
            # However, if there is an element to the right or left of the current k, then its value will be found below
            if (i != 0):
                leftVal = nums[i-1] # getting value to the immediate left if the i value is not the first element of nums
            if (j != (size - 1)):
                rightVal = nums[j+1] # getting value to the immediate right if the j value is not the last element of nums

            leftarray_points = 0 # setting to zero at beginning
            rightarray_points = 0 # setting to zero at beginning
            # However, if there is a subarray to the left or right of the current array, its value needs to be defined based on previous iterations
            if (i != k): # if k is not the first element
                leftarray_points = Array_points[i][k-1]
            if (j != k): # if k is not the last element
                rightarray_points = Array_points[k+1][j]

            Array_points[i][j] = max(Array_points[i][j], (leftVal * nums[k] * rightVal) + leftarray_points + rightarray_points)

print(Array_points)
# print(Array_points[0][size - 1]) # entry corresponding to a subarray with index from 0 to size - 1, aka the full vector (recursively defined based on smaller subarrays)
