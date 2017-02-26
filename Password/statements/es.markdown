# Descripción

El día de hoy, Karel El Espía tiene una nueva misión. Él debe infiltrarse en la base enemiga para robar toda la información secreta del Maléfico Chuzpa.

Para esto, él necesita descifrar el codigo que desactiva todas las defensas de las instalaciones enemigas.

Él cuenta con un código $S$, conformado por letras minúsculas del abecedario inglés. Este posible código fue secuestrado en alguna de las misiones anteriores, pero pronto se dan cuenta que no es el correcto.

El equipo de Karel tiene capturado a un enemigo que asegura saber descifrar el código robado para generar la verdadera contraseña que desarmara la base enemiga. Como no quiere traicionar tan descaradamente a su bando, él escribe una lista de operaciones que deben ejecutar para obtener la contraseña.

La lista dada cuenta con dos operaciones:

- Operación $1$. Dado un rango $i$ y $j$, se debe rotar $k$ veces cada caracter de $S$ contenido en el rango. Rotar una letra es llevarla a la siguiente letra en el abecedario. La rotación de _z_ es _a_.

- Operación $2$. El primer carácter de $S$ será el siguiente carácter de la contraseña efectiva. Lo siguiente que se debe hacer es eliminar ese carácter de $S$ e insertar una letra _a_ al final de $S$.

Ayuda a Karel a decifrar el código de defensa.

# Entrada

- Línea $1$: Dos enteros, $n$ y $Q$. El primero representa el tamaño de el código inicial $S$ y el segundo son el número de operaciones que escribió el prisionero.
- Línea $2$: La cadena de caracteres $S$.
- Líneas $l+2 ... l+Q+1$: El tipo de operación a efectuar ($1$ ó $2$). Si la operación es de tipo $1$ seguirán tres enteros, $i$, $j$ y $k$.

# Salida

Debes imprimir la contraseña de la base enemiga.

# Ejemplo

||input
11 6
dontsolveit
2
1 1 11 2
2
2
2
1 1 1 1
||output
dqpv
||description
Al principio $S$=dontsolveit

Operación 2-> "d" es el primer carácter en la solución y ahora $S$=ontsolveita

Operación 1-> $S$=qpvuqnxgkvc

Operación 2-> "q" es el siguiente carácter y $S$=pvuqnxgkvca

Operación 2-> "p" es solución y $S$=vuqnxgkvcaa

Operación 2-> "v" es solución y $S$=uqnxgkvcaaa

Operación 1-> $S$=vqnxgkvcaaa
||end

# Límites

Para todos los casos:

* $1 \leq Q \leq 100,000$

* $1 \leq i, j \leq n$

* $k \leq 1,000$

# Subtask 1 [20 ptos]

* $1 \leq n \leq 1,000$

# Subtask 2 [40 ptos] 

* $1 \leq n \leq 100,000$

* Se asegura que todas las operaciones de tipo $2$ vendrán después de todas las de tipo $1$.

# Subtask 3 [40 ptos]

* $1 \leq n \leq 100,000$