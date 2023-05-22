from machine import UART
import uos

class Step:
    def __init__(self):
        self.uart = UART(0, 115200)                         
        self.uart.init(115200, bits=8, parity=None, stop=1) 
        uos.dupterm(None, 1)

    def ford(self):
        self.uart.write('f')

    def back(self):
        self.uart.write('b')

    def right(self):
        self.uart.write('r')

    def left(self):
        self.uart.write('l')
    
    def stop(self):
        self.uart.write('s')

s = Step()