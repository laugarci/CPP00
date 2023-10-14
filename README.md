# Conceptos de CPP00

### Vectores en C++

Un vector es una estructura de datos de tamaño fijo y contiguo en memoria. Los elementos de un vector se almacenan uno al lado del otro, lo que permite un acceso rápido y aleatorio a los elementos a través de un índice. En C++, los vectores se implementan mediante la clase std::vector y se asignan automáticamente más memoria si es necesario al agregar elementos, pero el almacenamiento es contiguo.

Los vectores (std::vector) tienen un tamaño dinámico, lo que significa que pueden crecer o reducirse automáticamente a medida que se agregan o eliminan elementos.

Los vectores gestionan automáticamente la memoria subyacente para ti, lo que facilita agregar elementos sin preocuparte por la asignación manual de memoria.

Los vectores proporcionan una variedad de funciones y métodos útiles que facilitan su manipulación, como push_back(), size(), empty(), pop_back(), entre otros.

Los vectores realizan comprobaciones de límites (bounds checking) en tiempo de ejecución para evitar desbordamientos de memoria.

### std::pair

std::pair es una estructura de datos de C++ que se utiliza para almacenar pares de elementos. Cada par consta de dos elementos, uno llamado "first" (primero) y otro llamado "second" (segundo). Esta estructura es especialmente útil cuando necesitas mantener dos elementos juntos, pero no necesitas una colección más grande como un vector o una lista.

std::pair es útil en situaciones donde necesitas agrupar dos elementos relacionados en una sola entidad, como coordenadas (x, y), claves y valores, etc. Puedes usarlos para mantener la relación entre dos elementos de manera ordenada y eficiente.

