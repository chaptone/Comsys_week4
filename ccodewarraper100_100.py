import ctypes
import time


start = time.time()
kuy = ctypes.CDLL('./matrixccode100_100.so')
kuy.main()
end = time.time()
print(end-start)
