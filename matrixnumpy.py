import numpy as np
import sys
import time

start = time.time()
polyShape = []
with open(sys.argv[1]) as f:
    next(f)
    for line in f:
        line = line.split() # to deal with blank 
        if line:            # lines (ie skip them)
            line = [int(i) for i in line]
            polyShape.append(line)
mx = np.matrix(polyShape)
end = time.time()
print(end-start)
