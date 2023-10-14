# Conceptos de CPP00

## Constructor y destructor

### Constructor

Un constructor es un método especial de una clase que se llama automáticamente cuando se crea un objeto de esa clase. Su función principal es inicializar los miembros de la clase y realizar cualquier configuración necesaria para que el objeto esté en un estado válido y utilizable.
Los constructores se llaman con el mismo nombre que la clase y no tienen un tipo de retorno explícito. Pueden tener parámetros, lo que permite diferentes formas de construir un objeto. Por ejemplo, puedes tener un constructor sin argumentos, un constructor con un conjunto específico de argumentos, etc.
Si no se proporciona un constructor en una clase, C++ proporcionará un constructor predeterminado (constructor por defecto) que realizará una inicialización básica de los miembros de la clase.

### Desctructor

Un destructor es otro método especial de una clase que se llama automáticamente cuando un objeto sale del ámbito o se elimina explícitamente (por ejemplo, usando el operador delete para objetos creados en el montón o usando free en objetos creados en el montón en C++).
La función principal del destructor es liberar los recursos que el objeto ha adquirido durante su ciclo de vida, como memoria dinámica o recursos externos. También se utiliza para realizar tareas de limpieza antes de que se destruya el objeto.
El destructor lleva el mismo nombre que la clase precedido por una tilde (~).


## Vectores

Un vector es una estructura de datos de tamaño fijo y contiguo en memoria. Los elementos de un vector se almacenan uno al lado del otro, lo que permite un acceso rápido y aleatorio a los elementos a través de un índice. En C++, los vectores se implementan mediante la clase std::vector y se asignan automáticamente más memoria si es necesario al agregar elementos, pero el almacenamiento es contiguo.

Los vectores (std::vector) tienen un tamaño dinámico, lo que significa que pueden crecer o reducirse automáticamente a medida que se agregan o eliminan elementos.

Los vectores gestionan automáticamente la memoria subyacente, lo que facilita agregar elementos sin preocuparte por la asignación manual de memoria.

Los vectores proporcionan una variedad de funciones y métodos útiles que facilitan su manipulación, como push_back(), size(), empty(), pop_back(), entre otros.

Los vectores realizan comprobaciones de límites (bounds checking) en tiempo de ejecución para evitar desbordamientos de memoria.

## std::pair

std::pair es una estructura de datos de C++ que se utiliza para almacenar pares de elementos. Cada par consta de dos elementos, uno llamado "first" (primero) y otro llamado "second" (segundo). Esta estructura es especialmente útil cuando necesitas mantener dos elementos juntos, pero no necesitas una colección más grande como un vector o una lista.

std::pair es útil en situaciones donde necesitas agrupar dos elementos relacionados en una sola entidad, como coordenadas (x, y), claves y valores, etc. Puedes usarlos para mantener la relación entre dos elementos de manera ordenada y eficiente.

