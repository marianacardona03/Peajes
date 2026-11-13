# Peajes

1. Código estudiantil: 104626011494
2. No sé puede crear un objeto vehículo directamente porque la clase vehículo tiene funciones virtuales puras que la convierten en una clase abstracta, y las clases abstractas no se pueden instanciar. 
3. Porque permite que al eliminar un vehículo mediante Vehículo\* también se ejecute el destructor de la clase   correspondiente, evitando problemas al liberar la memoria. 
4. El programa lanza una excepción DatosInvalidos indicando que el vehículo es nulo y no realiza el registro. Esto se hizo así para evitar errores al intentar acceder a un vehículo que no existe.

