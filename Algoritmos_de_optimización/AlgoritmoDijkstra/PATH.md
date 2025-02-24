## ¿Qué es el PATH?

El PATH es una variable de entorno en el sistema operativo que contiene una lista de rutas a directorios. Cuando ejecutas un comando en la consola, como `jupyter lab`, el sistema busca el ejecutable correspondiente en los directorios listados en esta variable. Si la ruta donde está instalado el ejecutable de Jupyter no está en el PATH, el sistema no podrá encontrarlo y aparecerá un error.

---

## ¿Por qué ocurre este problema?

1. **Python no configuró correctamente el PATH durante su instalación:**  
   Si durante la instalación de Python no seleccionaste la opción "Add Python to PATH", ni Python ni sus scripts (como Jupyter) estarán disponibles desde la consola.
---

## Solución

### Paso 1: Verificar si Jupyter está instalado correctamente

Ejecuta el siguiente comando para asegurarte de que Jupyter está instalado:

```bash
pip show jupyterlab
```

Si está instalado, deberías ver información como la versión y su ubicación.

### Paso 2: Encontrar la ubicación del ejecutable

El ejecutable de Jupyter suele estar en:

- **Location: :** `C:\Usuario\PythonXX\Scripts`

---

### Paso 3: Agregar el directorio al PATH

1. **Abrir Configuración del sistema:**
   - Presiona `Win + S`, escribe "Configuración avanzada del sistema" y abre la opción.

2. **Variables de entorno:**
   - En la pestaña "Opciones avanzadas", haz clic en "Variables de entorno".
   - Busca la variable llamada `Path` en "Variables del sistema" y haz clic en "Editar".

3. **Agregar una nueva entrada:**
   - Haz clic en "Nuevo" y pega la ruta al directorio `Scripts` de Python. Ejemplo:

```bash
C:\PythonXX\Scripts
```