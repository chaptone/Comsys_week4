import ctypes
import time


start = time.time()
kuy = ctypes.CDLL('./matrixccode1000_1000.so')
kuy.main()
end = time.time()
print(end-start)
