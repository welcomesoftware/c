# Funciones Avanzadas

## Funciones con número variable de argumentos

Ya hemos usado funciones como printf() y scanf(), que toman un número variable de argumentos.
Nosotros podemos escribir nuestras propias funciones que tomen una lista variable de argumen-
tos. Los programas que tengan funciones con listas variables de argumentos deben de incluir 
el archivo de encabezado STDARGS.H.

Cuando se declara una función que toma una lista variable de argumentos primero se listan los 
parametros fijos, es decir, aquellos que siempre están presentes (debe haber por lo menos un
parametro fijo). Luego se incluyen puntos suspensivos (...) al final de la lista de parametros,
para indicar que se pasan cero o más argumentos adicionales a la función. 

¿Cómo sabe la función qué tantos argumentos se le han pasado en una llamada especifica?
Uno se lo dice. Uno de los parametros fijos le dice a la función la cantidad total de argumen-
tos. Por ejemplo, cuando se usa printf() la cantidad de especificadores de conversión, en la 
cadena de formato, le dice a la función qué tantos argumentos adicionales debe esperar. En 
forma más directa, un argumento fijo puede ser la cantidad de argumentos adicionales.

La función también debe saber el tipo de cada argumento en la lista de variables. En el caso de 
printf(), los especificadores de conversión indican el tipo de cada argumento. En otros casos 
todos los argumentos de la lista variable son del mismo tipo. Para crear una función que acepte
diferentes tipos en la lista variable de argumentos, se debe inventar un metodo para pasar infor-
mación acerca de los tipos de argumentos.

Las herramientas para usar una lista variable de argumentos están definidas en STDARGS.H. Estas 
herramientas se usan dentro de la función para recuperar los argumentos en la lista variable.

*va_list* un tipo de dato apuntador.
*va_start()* una macro utilizada para inicializar la lista de argumentos.
*va_arg()* una macro utilizada para recuperar cada argumento, en turno, de la lista de variables.
*va_end()* una macro utilizada para limpieza cuando han sido recuperados todos los argumentos.

La manera en que se usan las macros es explicada aquí, seguida de un ejemplo. Cuando la función es
llamada accesa argumentos de la manera siguiente: 

* Declara una variable de apuntador de tipo *va_list*. Este apuntador se usa para accesar los 
	argumentos individuales. Por lo general, aunque no es requerido, se le denomina a esta variable
	*arg_ptr*.
* Llama a la macro *va_start()*, pasándole el apuntador *arg_ptr* así como el nombre del último 
	argumento fijo. La macro *va_start()* no tiene valor de retorno, sino simplemente inicializa al
	apuntador *arg_ptr* para que apunte al primer argumento de la lista variable.
* Para recuperar cada argumento llama a *va_arg()*, pasándole el apuntador *arg_ptr* y el tipo de 
	dato del siguiente argumento.
