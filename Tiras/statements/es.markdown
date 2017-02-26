#Descripción

Para tu clase de arte te han pedido tiras de colores. Estas tiras tienen dos propiedades mágicas. La primera consiste en una gran absorción de agua, es decir, si se llega a mojar, en menos de 5 minutos se secará y estará como si nada hubiera pasado. La segunda propiedad es que si 2 o más tiras de distintos colores se estántocando y estas se mojan, como resultado, todas las tiras tendrán un nuevo color,pero por desgracia no te gusta como se ve. Sin importar de que colores eran las tiras, siempre se forma este color.

Para tu clase preparaste $N$ tiras de varias medidas y colores en el suelo sobre una línea. Esta línea tiene posiciónes enteras marcadas donde puedes ir poniendo las tiras. Por ejemplo, si tienes una tira naranja de longitud 5, puedes ponerla en el punto 3 y se extendería hasta el punto 8.Si además pones una tira de longitud 5 en punto 4, esta se extiende hasta el punto 9 y ademas estaría tocando a la tira anterior.

#Problema

Una gran tormenta se está acercando,lo cual provocará que se mojen tus tiras. Tienes que actuar rápido y necesitas quitar la menor cantidad de tiras de tal forma que ninguna obtenga el color que no te gusta. Si dejas algunas en el suelo no importa, su propiedad de absorción las mantendrá a salvo.

#Entrada
En la primera línea un entero $N$, la cantidad de líneas que tienes. 
En las siguines $N$ líneas tendrás las descripciones de cada tira. La i-ésima de estas líneas tiene 2 enteros, $p_i$ y $l_i$, que indica la posición de la i-ésima tira y su longitud. Estas simpre se extienden desde $p_i$ hasta $p_i$+$l_i$.

#Salida
Un único entero $M$ indicando la mínima cantidad de tiras que tienes que quitar para evitar que ninguna obtenga el color que no te gusta.

#Consideraciones

 - No conocerás lo colores de las tiras, pero sabes que no hay más de una con el mismo color y ninguna tiene el color que no te gusta.

 - En cualquier punto de la línea nunca habrá más de 2 tiras. 

 - Ninguna tira estará en contacto con más de otras 2 tiras.

#Ejemplo

||input
3
1 9
7 4
11 5
||output
1
||description
La línea 1 se toca con la 2. Al mismo tiempo la 2 se toca con la 3. Si quitamos la tira 2, quedarían la 1 y la 3, las cuales no se están tocan. Por lo tanto solo es necesario quitar la 2.
||input
5
1 1
2 2
5 5
10 10
25 25
||output
2
||description
La 1 y la 2 se tocan, hay que quitar una de las 2. Lo mismo pasa con la 3 y la 4. Nadie toca con la 5.
||end


#Límites

 - 1 $\le$ $N$ $\le$ $10^5$
 - 1 $\le$ $p_i$ $\le$ $10^9$
 - 1 $\le$ $l_i$ $\le$ $10^9$

###Subtarea 1 ( 20 puntos ) : 
 - 1 $\le$ $N$ $\le$ $1000$
 - 0 $\le$ $p_i$ $\le$ $1000$
 - 1 $\le$ $l_i$ $\le$ $1000$

###Subtarea 2 ( 20 puntos ) : 
 - 1 $\le$ $N$ $\le$ $5000$
 - 1 $\le$ $l_i$ $\le$ $1000$

###Subatarea 3 ( 15 puntos ) :
 - 1 $\le$ $N$ $\le$ $5000$
 - Cada tira tocará a lo mucho a otra tira.

###Subtarea 4 ( 35 puntos ) : 
 - 1 $\le$ $N$ $\le$ $5000$

###Subtarea 5 ( 10 puntos ) : 
 - Ninguna restricción extra.