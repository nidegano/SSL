# Trabajo 00 - "Hello, World!" en C

## Autor de la resolución

  - Usuario: nidegano
  - Legajo: 175.248-0
  - Apellido: Degano
  - Nombre: Nicolás
  - Número y título del trabajo: 00 - "Hello, World!" en C

## Enunciado

  - Objetivos
    - Configurar el entorno de desarrollo para la cursada.
    - Tener un primer contacto con las herramientas necesarias para abordar la resolución de los trabajos propuestos en el curso.
    - Demostrar capacidad para editar, compilar, y ejecutar programas C mediante el desarrollo de un programa simple.
    - Crear repositorio personal git.
    - Armar de equipo de trabajo.

  - Temas
    - Sistema de control de versiones.
    - Lenguaje de programación C.
    - Proceso de compilación.
    - Pruebas.

  - Problema
    - Adquirir y preparar los recursos necesarias para resolver los trabajos del curso.

  - Restricciones
    - Usar la versión C23 del lenguaje C.

  - Tareas
    1. Cuenta en GitHub
      - Si no tiene, cree una cuenta GitHub.
      - Si no lo hizo, asocie a su cuenta GitHub el email @frba y verifíquelo. Es posible asociar más de una cuenta email a una cuenta GitHub.
      - Si no lo hizo, indique que su cuenta email @frba es pública. Esto permite a la cátedra encontrar a los estudiantes. Si por temas de privacidad prefiere no tener como pública esa dirección, puede cambiarla al final del proceso.  

    2. Repositorio para público para la materia
      - Cree un repositorio público llamado SSL.
      - En la raíz de ese repositorio, escriba el archivo readme.md que actúa como front page del repositorio personal.
      - Cree la carpeta 00-CHelloWorld.
      - En esa carpeta, escriba un segundo archivo readme.md que actúa como front page de la resolución.  

    3. Compilador
      - Seleccione, instale, configure, y pruebe un compilador C23, que es la versión publicada oficialmente en 2024; también se lo conoce como C2x. Los más osados pueden buscar un compilador que soporte C2Y. La prueba del compilador consiste en:
        - Escribir un programa hello.c que envíe a stdout la línea Hello, World! o similar. Opcionalmente, el mensaje puede incluir la versión del lenguaje.
        - Compilar el programa, preferentemente desde la línea de comandos.
        - Ejecutar el programa y verificar que la salida es la esperada.
        - Ejecutar el programa con la salida redireccionada a un archivo output.txt; verificar su contenido.
        - Como crédito extra, compilar con make.
        - Como otro crédito extra, ejecutar con make.  

    4. Resultados
      Registre los resultados anteriores en readme.md de la siguiente manera:
      - el compilador seleccionado,
      - la versión de ese compilador,
      - y la versión de C que el compilador compila.  

    5. Publicación
      - Publique el trabajo en el repositorio personal SSL la carpeta 00-CHelloWorld con readme.md, hello.c, y output.txt.  

    6. Armado de Equipo
      - Aunque el trabajo es individual, fomentamos la colaboración entre compañeros para su resolución. Consideramos que es una buena oportunidad para armar equipo para los trabajos siguientes que en su mayoría son grupales. El docente del curso indica la cantidad de integrantes mínima y máxima por equipo.
      - Informe el número de equipo en esta lista. Con el número de equipo y cuenta @frba, la Cátedra le envía la invitación al repositorio privado del equipo, por eso es importante que su cuenta GitHub tenga asociado como email público su email @frba, tal como indica el primer paso.
      - Luego de aceptar la invitación al repositorio privado del equipo, si lo desea, puede cambiar el email público en GitHub.  
  
    7. Productos
      ```
      Usuario                  // Usuario GitHub
      `-- SSL                  // Repositorio público para la materia
          |-- readme.md        // Archivo front page del usuario
          `-- 00-ChelloWorld   // Carpeta el trabajo
              |-- readme.md    // Archivo front page del trabajo
              |-- hello.c      // Archivo fuente del programa
              `-- output.txt   // Archivo con la salida del programa
      ```  
## Resultados
  
  - Compilador seleccionado: GCC  
    gcc.exe (Rev13, Built by MSYS2 project) 15.2.0  
    Copyright (C) 2025 Free Software Foundation, Inc.

  - Versión de C que el compilador compila: C23