import sys, math

nums = sys.stdin.readline().split(" ")
my_set = set()
my_list = []
for i in xrange(int(nums[1])):
    inpt = int(sys.stdin.readline())
    my_set.add(inpt)
    my_list.append(inpt)

x = 0
for i in xrange(1, int(nums[0]) + 1):
    if (i in my_set): 
        continue
    while (x < len(my_list) and my_list[x] < i):
        print my_list[x]
        x += 1
    print i

while (x < len(my_list)):
    print my_list[x]
    x += 1
