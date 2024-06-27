# iio-esperanza
Prueba de esperanza en cadenas de markov

Se tiene un grafo de una CMTDH con 3 estados,
la matriz de probabilidades de la forma 

p = [ 2/3 1/6 1/6]
    [0   0     1]
    [0   1     0]

El numero esperado de retornos al estado 1 se calcula de la siguiente manera:

R1 = 1 / (1-φ) = 1 / (1 - 2/3) = 3

Entonces por la ley de los grandes numeros:
La Ley de los Grandes Números es un teorema fundamental en la teoría de la probabilidad y la estadística. Esta ley establece que, a medida que aumenta el número de repeticiones de un experimento aleatorio, la media de los resultados observados tiende a aproximarse al valor esperado teórico.

tenemos que en teoria, el promedio de veces que se vuelve al estado 1 en muchas repeticiones deberia ser 3.

En el programa, se elige un numero aleatorio que indica el indice del diccionario con los estados y sus probabilidades, y se va contando cuantas veces se vuelve al estado 1 para luego abandonarlo por siempre:
el promedio efectivamente se acerca a 3
