# PROGRAMAS EN LENGUAJE C++ DE  CAPURRO DANNA 

>Programas realizados en la Actividad C2. Descripción y funcionamiento de cada progama c++.

![This is image](https://user-images.githubusercontent.com/101121335/169905442-4f52be26-5fe8-4503-ae45-aec1e450e4c1.png)


## ***INFORMACIÓN DE AUTOR*** 👩‍🦱                                                      
- Creado por: Danna Sayenka Capurro Mendoza.                               

- Correo institucional: danna.capurro.mendoza@utelvt.edu.ec

- Correo Personal: dannacapurromendoza@gmail.com

- Video de Introducción sobre Informática,Compuradoras y Programación: https://youtu.be/9qTTwykcWeg  
 
# **PROGRAMAS** 👩‍💻

## **1. PROGRAMA PARA COMPARAR 2 NÚMEROS**
- **Descripción del problema que soluciona:**
El programa permite la comparación de dos numeros ingresados de forma manual por el usuario, y que permite determinar cuando estos numeros son iguales o cuando uno de ellos es mayor al otro.

- **Funcionalidad:**
En este programa usaremos una variable de tipo decimal conocida como: `(float)`.
Este programa nos permite ingresar dos cantidades que deseamos comparar de las cuales van a estar almacenadas en `Dc_valor1` y `Dc_valor2` respectivamente.
Una vez que esten ingresadas las variables, utilizaremos la función `if` que nos sirve para poder hacer una comparación lógica entre las cantidades o valores ingresados.

- **Salidas:** 
Una vez que hemos realizado el proceso lógico, se pueden proceder a imprimir un total de tres posibilidades:

1. Ambas cantidades son iguales (en caso de que los numeros ingresados sean iguales).
2. El valor `Dc_valor1` es mayor que `Dc_valor2` (en caso de que el primer valor ingresado sea mayor al segundo).
3. El numero `Dc_valor2` es mayor que `Dc_valor1` (en caso de que el segundo valor ingresado sea mayor al primero).

>**EJERCICIO**
>
> ![image](https://user-images.githubusercontent.com/101121335/170129806-5d9eadee-7995-4013-96e9-e4cbab4930aa.png)


## **2. PROGRAMA PARA SUMAR VARIOS NÚMEROS**
- **Descripción del problema que soluciona:**
Este programa nos permite sumar una cierta o diversa cantidad de numeros que el usuario desee ingresar, añadiendolos todos de forma manual.

- **Funcionalidad:** 

En este programa vamos a usar dos tipos de datos que son: los enteros `(int)`, y los decimales `(float)`. 

Vamos a utilizar, de igual manera, el uso de un contador `(Dc_c que va a estar declarado como un entero)` y el uso de un acumulador `(Dc_s que va a estar declarado como decimal)`.

El contador se va a ir incrementando de uno en uno, este en función del numero que ingrese el usuario `(Dc_n)`.

El acumulador va a ir almacenando la suma de las cantidades que ingrese el usuario `(Dc_x)`.

Y para complementar todo este proceso, vamos a usar una estructura repetitiva `do-while`, que esta nos servirá para que el proceso anteriormente descrito, proceda a repetirce mientras se cumpla una condición `(Dc_c<Dc_n)`.

- **Salidas:**
Una vez realizado todo este proceso, el programa va a imprimir el valor del contador `(Dc_n)` y el valor del acumulador `(Dc_s)`.


>**EJERCICIO**
>
>![image](https://user-images.githubusercontent.com/101121335/170132059-97ec9cc1-4ba5-494e-8fe0-c2d790ab88c2.png)



## **3. PROGRAMA PARA CALCULAR EL PUNTO DE VENTA**
- **Descripción del problema que soluciona:**
Este programa nos permite ingresar el valor de compras que el usuario desee, mediante el cual se calcula el valor del IVA de la compra, y esta aplica un descuento a elección del usuario. Para finalmente: mostrar el valor bruto de la compra, el valor del IVA, su valor del descuento, y el precio final a que se debe pagar.

- **Funcionalidad:**

En este programa, vamos a utilizar variables de tipo entero como lo es `(int)` y variables de tipo decimal que es `(float)`.

De la misma manera, vamos a requerir del uso de un contador el cual es `(Dc_C)` y el uso de un acumulador que es `(Dc_A)`

De tal forma que dicho contador va a ir incrementando de uno en uno, en función del número de compras que el usuario desee ingresar `(Dc_B)`.

Y el acumulador va a ir almacenando la suma de los valores de cada unas de las compras que ingrese el usuario `(Dc_X)`.

Por eso para complementar este proceso, vamos a utilizar una estructura repetitiva que es `do-while`, ña cuál nos servirá para que el proceso anteriormente descrito, se repita mientras se cumpla una condición `(Dc_C<Dc_B)`.

Ahora bien una vez que hemos ingresado, sumado y almencenado el valor bruto de las compras `(Dc_A)`, procedemos a aplicarle un descuento. Para ello, le pedimos al usuario que ingrese el descuento que desee aplicar `(Dc_X)`.

Posterior a esto, realizaremos los siguientes procesos:

`Dc_Vdsc=(Dc_A*Dc_X)/100`;La variable `Dc_Vdsc` va a almacenar el resultado del descuento que se le aplique a la compra.

`Dc_V1=Dc_A-Dc_Vdsc`;La variable `Dc_V1` va a almacenar el resultado de la diferencia entre el valor acumulado de las compras, y el valor resultante del descuento.

`Dc_Ivav=Dc_V1*0.12`;La variable `Dc_Ivav` va a almacenar el calculo del IVA de la variable anterior `Dc_V1`.

`Dc_Fn=(Dc_A-Dc_Vdsc)+Dc_Ivav`;La variable `Dc_Fn` va a almacenar el resultado final, en el cual se va a aplicar el descuento, y añadir el IVA.


- **Salidas:**

Una vez hecho todo este proceso, el programa nos va a imprimir los siguientes valores:

`Dc_A`: Variable que representa el Valor Bruto de las compras.

`Dc_Vdsc`: Variable que representa el Valor de la compra, aplicandole el Descuento.

`Dc_Ivav`: Variable que representa el Valor de la compra, añadiendole el IVA.

`Dc_Fn`: Variable que representa el Valor Final.

>**EJERCICIO**
>
![image](https://user-images.githubusercontent.com/101121335/170134883-5b174c0a-48da-4ddd-84ad-41d45ee023bf.png)

## **4. PROGRAMA PARA SABER LA EDAD DE UNA PERSONA**
- **Descripción del problema que soluciona:**
Este programa nos permite calcular la edad exacta de una persona, mediante el ingreso de su fecha de nacimiento del usuario ene el formato de `(dd/mm/yy)` y el ingreso de la fecha actual en el formato de "DIA - MES - AÑO" `(dd/mm/yy)`.

- **Funcionlidad:**

En el desarrollo de este programa, solo utilizaremos variables de tipo entero `(int)`.

Para iniciar este programa, ingresaremos el valor de las variables que van a representar la fecha actual, bajo el formato día/mes/año `(Dc_dd, Dc_mm y Dc_aa respectivamente)`.

Procedente a esto, ingresaremos  el valor de las variables que van a representar la fecha de nacimiento del usuario, bajo el formato día/mes/año `(Dc_dd1, Dc_mm1, Dc_aa1 respectivamente)`.

Una vez que hemos ingresado esas variables, el programa procede a realizar dos operacions lógicas, mediante el uso de la función `if`; la cual la primera de ellas, va a estar compuesta por los diversos procesos:

En caso de que el dia actual ingresado, sea menor al dia de nacimiento del usuario `(Dc_dd<Dc_dd1)`:

`Dc_dd=Dc_dd+30`; Se sumaran 30 dias al día actual ingresado por el usuario.

`Dc_mm=Dc_mm-1`; Se procede a restar un mes a la cantidad de meses que han sido ingresados por el usuario.

`Dc_da=Dc_dd-Dc_dd1` Utilizamos la variable `Dc_da`, la cual va a almacenar la diferencia entre el día actual y el día de nacimiento.

En caso de que si no se cumple esa condición `(Dc_dd<Dc_dd1)`, entonces simplemente se produce la diferencia entre el día actual, y el día de nacimiento, almancenado en la variable `Dc_da (Dc_da=Dc_dd-Dc_dd1)`.

En caso procedente de que el mes actual ingresado sea menor al mes de nacimiento del usuario `(Dc_mm<Dc_mm1)`:

`Dc_mm=Dc_mm+12`; Se Procede a la suma de 12 meses a la cantidad de meses actuales ingresados por el usuario.

`Dc_aa=Dc_aa-1`; Se elimina un año a la cantidad de años actuales que han sido ingresados.

`Dc_ma=Dc_mm-Dc_mm1`; Utilizamos la variable `Dc_ma`, la cuál va a almacenar la diferencia entre el mes actual y el mes de nacimiento.

En caso de que si no se cumple esta condición `(Dc_mm<Dc_mm1)`, entonces simplemente se produce la diferencia entre el mes actual, y el mes de nacimiento, almacenado en la variable `Dc_ma (Dc_ma=Dc_mm-Dc_mm1;)`.

Una vez que hemos culminado estos procesos, en la variable `Dc_ya`, vamos a proceder a almacenar la diferencia entre el año actual ingresado, y el año de nacimiento del usuario `(Dc_ya=Dc_aa-Dc_aa1)`.

- **Salidas:**

Una vez que hemos realizado todos los procesos descritos, el programa prodece a imprimir los siguientes resultados:

`Dc_ya`: Variable que almacena la diferencia entre el año actual y el año de nacimiento.

`Dc_ma`: Varible que almecena la diferencia entre el mes actual y el mes de nacimiento.

`Dc_da`: Variable que almacea la diferencia entre el día actual y el día de nacimiento.

>**EJERCICIO**
>
>![image](https://user-images.githubusercontent.com/101121335/170143844-19f5827b-af02-4a73-8e03-8c5a8e7125c6.png)



## **5. PROGRAMA CLASIFICADOR Y CONTADOR DE MONEDAS**
- **Descripción del problema que soluciona:**
Este programa nos permite ingresar la cantidad de monedas que el usuario desee, las cuales estan repartidas en dos denominaciones `(10, 25 centavos)`. Una vez ingresadas las monedas, este programa debe clasificarlas en cuantas monedas de cada tipo se han ingresado, y por último permite imprimir ese dato e imprimir el valor total del dinero ingresado.

- **Funcionalidad:**

Este programa va a utilizar variables de tipo entero `(int)` y variables de tipo decimal `(float)`.
De igual manera, vamos a requerir de un contador `(Dc_c)` y el uso de un acumulador `(Dc_a)`.  
El contador va a ir incrementando de uno en uno en función de la cantidad de monedas que el usuario desea ingresar `(Dc_n)`.

Para comenzar con la realización del programa, debemos de usar la variable `Dc_n` para que el usuario ingrese la cantidad de monedas a ingresar. Esta misma variable va a ser usada para determinar el tamaño del vector num, que vamos a declarar después.

Una vez que hemos usado la variable jm_n, vamos a usar un vector de una dimensión, con el valor almacenado en la variable jm_n (num [jm_n]).

Posterior a ello, vamos a usar la variable jm_i, con la cual el usuario tiene que ingresar los valores, con los cuales va a rellenar el vector declarado anteriormente.

Adicional a esto, vamos a usar el buclue for, que va a permetir que el proceso anterior se repita hasta que se cumplan ciertas condiciones (for (int jm_i=0; jm_i<jm_n; jm_i++)).

Complementando el programa, vamos a añadir la función if y else_if para poder analizar los tipos de monedas ingresadas por el usuario; en caso de que la moneda ingresada sea de un valor de 10 centavos(num [jm_i]==10), vamos a usar un acumulador (jm_sum1) que va a almacenar unicamente la cantidad de monedas de 10 centavos ingresadas.

En caso de que la condición anterior no se cumpla, usaremos un else_if, en donde, si el valor de la moneda ingresada es de 25 centavos (num [jm_i]==25), vamos a usar un acumulador (jm_sum25) que va a almacenar unicamente la cantidad de monedas de 25 centavos; en caso de que no cumplan ninguna de las dos condiciones anteriores, usaremos un contador (jm_sum50) que va almacenar unicamente la cantidad de monedas de 50 centavos ingresadas.

También, vamos a usar una variable (jm_sum) para almacenar la suma de todas las monedas ingresadas.


- **Salida:** 

Una vez que se realicen los procesos descritos antes, el programa va a imprimr los siguientes resultados:

`Dc_c:` Esta variable va a almacenar la cantidad de monedas ingresadas.
`Dc_a:` Esta variable va a almacenar la cantidad total en dinero contado.

`Dc_c1:` Esta variable va a almacenar la cantidad de monedas de 10 centavos ingresadas.
`Dc_a1:` Esta variable va a contar la cantidad de monedas de 10 centavos ingresadas.

`Dc_c2:` Esta variable va a alamacenar la cantidad de monedas de 25 centavos ingresadas.
`Dc_a2:` Esta variable va a contar la cantidad de monedas de 25 centavos ingresadas. 

>**EJERCICIO**
>
>![image](https://user-images.githubusercontent.com/101121335/170149523-cd65677d-bab1-4159-9af7-7bca58c433f3.png)


## **CÓMO DESCARGAR E INSTALAR LOS PROGRAMAS**👩‍💻 
Con simplemente dos pasos podemos descargar el repositorio en el cual podemos encontrar dichos programas descritos y explicados en este post. Para saber como descargar e instalar los programas se tiene que realizar los 2 siguientes procesos que a continuación seran explicados:

1. **Clonar repositorio**

**Acerca de clonar un repositorio:**  Puedes clonar un repositorio desde GitHub.com hacia tu computadora local para que sea más fácil fusionar conflictos, agregar o eliminar archivos, y subir confirmaciones más grandes. Cuando clonas un repositorio, lo copias desde GitHub.com hacia tu máquina local.

**Ahora bien como puedo clonar mi repositorio**, para esto debemos usar el comando `git clone` seguido de la dirección del repositorio en el cual se encuentra el trabajo o proyecto.
> `git clone https://github.com/DannaCapurroMendoza/ACTIVIDAD-E2.git`

Luego de haber clonado en tu equipo, se procede a usar el comando `git pull` para de esta manera poder descargar cualquier cambio que se haya podido realizar en dicho repositorio.
De tal manera que usando el comando `ls` de termux se puede verificar que se encuentran todos los archivos que acabas de descargar.
Ahora bien en caso de que necesites realizar y subir cambios en los programas hay qe tener en cuenta que para esto debemos usar los comandos `git status`( que sirve para ver los cambios a los que se somete), `git add`(para añadir los cambios a la nube), `git commit`  (para comentar los cambios) y `git push` (para subir a github todos los cambios que se realizaron).

2. **Compilar los programas**

Al momento que desees compilar y ejecutar o correr los archivos `.cpp`se debe usar el comando `g++` añadiendo el 
`nombre-del-programa.cpp -o nombre-del-programa`.

A continuación se muestra un ejemplo de como se compila: 
`g++ Capurro-Danna-SumaN.cpp -o Capurro-Danna-SumaN`.




_**¡No puedo decir otra palabra más que “gracias por leer y llenarte de información importante en el mundo de la programación”!**_ 👩‍💻


_******Capurro Mendoza Danna Sayenka******_ 

