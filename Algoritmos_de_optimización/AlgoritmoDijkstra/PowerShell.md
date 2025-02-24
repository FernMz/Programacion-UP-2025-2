# PowerShell Cheat Sheet

## **Conceptos básicos de PowerShell**
- **Cmdlets:** Son comandos específicos en PowerShell, escritos en formato `Verbo-Sustantivo` (ej. `Get-Process`).
- **Aliases:** Atajos para cmdlets comunes, como `ls` (alias de `Get-ChildItem`).
- **Pipelines (`|`):** Permiten encadenar comandos y pasar datos entre ellos.

---

## **1. Navegación y Exploración**

| Comando                     | Descripción                              |
|-----------------------------|------------------------------------------|
| `Get-Location` (`pwd`)      | Muestra la ubicación actual.             |
| `Set-Location` (`cd`)       | Cambia el directorio actual.             |
| `Get-ChildItem` (`ls`)      | Lista archivos y carpetas del directorio.|
| `New-Item` (`mkdir`)                 | Crea un nuevo archivo o carpeta.         |
| `Remove-Item` (`rm`)        | Elimina archivos o carpetas.             |
| `Copy-Item` (`cp`)          | Copia archivos o carpetas.               |
| `Move-Item` (`mv`)          | Mueve archivos o carpetas.               |
| `Clear-Host` (`cls`)        | Limpia la pantalla.                      |

---

## **2. Manipulación de Archivos**

| Comando                       | Descripción                                   |
|-------------------------------|-----------------------------------------------|
| `Get-Content` (`cat`, `gc`)   | Muestra el contenido de un archivo.          |
| `Set-Content` (`sc`)          | Escribe contenido en un archivo (sobrescribe).|
| `Add-Content` (`ac`)          | Agrega contenido al final de un archivo.      |
| `Out-File`                    | Redirige la salida a un archivo.             |
| `Get-Item` (`gi`)             | Obtiene propiedades de un archivo o carpeta. |
| `Test-Path`                   | Verifica si un archivo o carpeta existe.     |

---

