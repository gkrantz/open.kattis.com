import sys, math
pi = 3.14159265359
rad = pi/180
nums = sys.stdin.readline().split(" ")
print int(math.ceil(int(nums[0])/math.sin(int(nums[1])*rad)))
