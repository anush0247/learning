2
product =  4
base =  2
candidates =  [3, 5, 6, 7, 8, 9]
product =  4
product =  6
base =  2
candidates =  [3, 5, 7, 8, 9]
product =  6
product =  8
base =  2
candidates =  [3, 5, 7, 9]
product =  8
product =  10
base =  2
[1, 2]
3
product =  6
base =  3
product =  9
base =  3
canproduct =  10
base =  5
[1, 2, 3, 5]
[1, 2, 3, 5, 7]
#!/usr/bin/python

# Calculate all the primes below 1000
# (Not the best way to do it, but...)

result = [1]
candidates = range(3,10)
base = 2
product = base

while candidates:
    print product
    while product < 10:
        if product in candidates:
            candidates.remove(product)
            print "candidates = ", candidates
            print "product = ", product
        product = product+base
        print "product = ",product
        print "base = ", base
    result.append(base)
    print result
    base = candidates[0]
    product = base
    del candidates[0]

result.append(base)
print result

2
product =  4
base =  2
candidates =  [3, 5, 6, 7, 8, 9]
product =  4
product =  6
base =  2
candidates =  [3, 5, 7, 8, 9]
product =  6
product =  8
base =  2
candidates =  [3, 5, 7, 9]
product =  8
product =  10
base =  2
[1, 2]
3
product =  6
base =  3
product =  9
base =  3
candidates =  [5, 7]
product =  9
product =  12
base =  3
[1, 2, 3]
5
product =  10
base =  5
[1, 2, 3, 5]
[1, 2, 3, 5, 7]
