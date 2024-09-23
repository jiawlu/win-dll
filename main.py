import ctypes


lib = ctypes.CDLL('build/libhello.so')

lib.testPrint.argtypes = []

lib.testPrint()