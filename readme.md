# Convert Ascci At String

convierte una secuencia en ascci a un string


# Cosas a hacer

- Una funcion, que convierta la funcion de string a una secuencia Ascci (Completado).
- Mejorar el rendimiento de las funciones ConvertStringAtAscci y ConvertAscciAtString.
  - Para esto, tengo pensado reservar memoria con anterioridad para evitar que se asigne
    memoria innecesarioamente.
    - Ejemplo:
        - str.lenght() * 3. Para las cadenas, que se usen para retornar.
        - sizeof(char) * 3. Para las cadenas de traducion ConvertAscciAtString.
- Implementar una funcionalidad para aceptar argumentos por consola para codificar y decodificar mensajes.        
