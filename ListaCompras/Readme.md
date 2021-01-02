# ListaCompras
Este programa utiliza los conocimientos adquiridos hasta el momento para
realizar un programa que pide al usuario que ingrese los items de una lista de
compra del supermercado. Cada uno de estos items son almacenados en una lista
encadenada. Al finalizar el programa, almacena los items de la lista enlazada
en un archivo de disco.

## Algoritmo
El funcionamiento de este *algoritmo* hace uso de la programación estructurada
para dividir un problema en muchas partes, y ejecutar cada operación dentro de
una sola función, así mismo evitar codigo repetitivo y poder aislar cualquier
problema que pudiese presentarse posteriormente. Esto es util tanto para el
desarrollo del programa como para **Debuggear** codigo en busca de errores.

A continuación se detallan las tareas específicas que ejecutará el programa.
Comenzando con una idea global de los objetivos del programa.

## *Tareas principales*
    Leer una lista existente.
    Crear una nueva lista.
    Salir del programa.


#### Nota
*De esta forma se ha dividido el programa en tres tareas principales, y
cada una de ellas puede ser asignada a una función. Ahora se puede dar un paso
más, dividiendo estas tareas en subtareas.*

#### Leer una lista existente:
    1. Verificar si hay alguna lista en disco.
    2. Leer del disco la lista existente.
    3. Cargar la lista en el programa.
    4. Desplegar la lista en pantalla.


#### Crear una nueva lista:
    1. Verificar si hay alguna lista en disco.
    2. Desplegar opciones (1. Nueva lista, 2. Actualizar lista).
    3. Pedir a usuario una o más entradas.
    4. Añadir nuevos datos a la lista.
    5. Guardar la lista actualizada en el disco.

#### Salir del programa:
    1. Verificar si hay una lista cargada en el programa.
    2. Guardar la lista actualizada en el disco.
    3. Despliega un mensaje de salida.
    4. Cierra el programa.


## *Subtareas en común*
Ahora podemos dar otro paso mas y subdividir más nuestras subtareas, a modo de
simplificar aún más nuestro problema y definir fuciones especificas para cada
tarea.

También podemos darnos cuenta que cada una de las tareas tienen **subtareas en
común**, para la cuales podemos escribirlas dentro funciones y así llamarlas
usa sola vez desde la tarea que las necesite, así no tener que repetir codigo,
y hacer más eficiente el desarrollo de nuestro programa.

#### Verificar si hay alguna lista en disco ( )
    Recibe el nombre de la lista como argumento.
    abre el archivo con el nombre de la lista.
    Si el archivo abre, retorna OK.
    Si el archivo no abre, retorna NULL.

#### Guardar la lista actualizada en el disco ( )
    Recibe el nombre de la lista como argumento.
    Recibe la lista enlazada como argumento.
    Escribe la lista enlazada actualizada en el archivo.
    Cierra el archivo.
