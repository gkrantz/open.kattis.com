import fileinput

my_dict = {}

for line in fileinput.input():
    for c in line.strip():
        if c in my_dict:
            my_dict[c] += 1
        else:
            my_dict[c] = 1
        
odds = 0    
for key in my_dict:
    if my_dict[key] % 2 != 0:
        odds += 1

if (odds == 0):
    print 0
else:
    print (odds-1)
