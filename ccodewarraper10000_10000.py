import ctypes
import time


start = time.time()
kuy = ctypes.CDLL('./matrixccode10000_10000.so')
kuy.main()
end = time.time()
print(end-start)
