import sys, math

nums1 = sys.stdin.readline().split(" ")
nums2 = sys.stdin.readline().split(" ")
nums3 = sys.stdin.readline().split(" ")

arr = [(int(d), i%3, i/3) for i, d in enumerate(nums1+nums2+nums3)]
arr.sort(key=lambda tup: tup[0])

res = 0
for i in range(1, len(arr)):
    res+=math.sqrt(math.pow(arr[i-1][1]-arr[i][1], 2)+math.pow(arr[i-1][2]-arr[i][2], 2))
    
print res
