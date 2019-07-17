
import psutil
import serial
import time

ser = serial.Serial('COM5', 9600, timeout=1) # CHANGE THE PORT 'COM5' TO MATCH YOUR OWN COM PORT.
tiempoInicial = time.time()
tiempoRefresco = 7200   #Time in seconds to refresh the whole screen


def refrescaPantalla():
    ser.close()     #Close and open the com port to reset Arduino
    ser.open()
    print ('pantalla refrescada')
    global tiempoInicial
    tiempoInicial = tiempoActual
    return

while True:
    tiempoActual = time.time()
    cpupercent = psutil.cpu_percent(0.1)
    print(cpupercent)
    memoria = psutil.virtual_memory().percent
    print (memoria)
    # print (tiempoActual - tiempoInicial)
    ser.write(b'%d' % cpupercent)
    ser.write(b'#')
    ser.write(b'%d' % memoria)
    ser.write(b'$')
    time.sleep(2)
    if (tiempoActual - tiempoInicial) >= tiempoRefresco:
        refrescaPantalla()