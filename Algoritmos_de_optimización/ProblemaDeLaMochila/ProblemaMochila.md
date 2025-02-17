# Problema de la Mochila 0-1

Se tiene:
- Un arreglo `valor` con el valor de cada objeto.
- Un arreglo `peso` con el peso de cada objeto.
- El número de objetos, `n`.
- La capacidad de la mochila, `Capacidad` (todos los valores son enteros positivos y se asume que los índices comienzan en 1).

Definimos `m[objeto, subcapacidad]` como el valor máximo acumulado que se puede obtener usando los primeros `objeto` objetos con una capacidad no mayor a `subcapacidad`.

La definición recursiva es:

- `m[0, subcapacidad] = 0` para cualquier `subcapacidad`.
- Si el peso del objeto actual excede la subcapacidad disponible, es decir, si `peso[objeto] > subcapacidad`, entonces:
  - `m[objeto, subcapacidad] = m[objeto - 1, subcapacidad]`
- En caso contrario:
  - `m[objeto, subcapacidad] = máx( m[objeto - 1, subcapacidad], m[objeto - 1, subcapacidad - peso[objeto]] + valor[objeto] )`

El valor de la solución final es `m[n, Capacidad]`.

El pseudocódigo completo es el siguiente:

```plaintext
// Entrada:
//   - Arreglo "valor" (valor de cada objeto)
//   - Arreglo "peso"  (peso de cada objeto)
//   - Número de objetos, n
//   - Capacidad de la mochila, Capacidad
// NOTA: Los arreglos "valor" y "peso" se asumen indexados a partir de 1.

arreglo m[0..n, 0..Capacidad];

para subcapacidad desde 0 hasta Capacidad hacer:
    m[0, subcapacidad] := 0

para objeto desde 1 hasta n hacer:
    m[objeto, 0] := 0

para objeto desde 1 hasta n hacer:
    para subcapacidad desde 1 hasta Capacidad hacer:
        si (peso[objeto] > subcapacidad) entonces:
            m[objeto, subcapacidad] := m[objeto - 1, subcapacidad]
        sino:
            m[objeto, subcapacidad] := máx( m[objeto - 1, subcapacidad],
                                           m[objeto - 1, subcapacidad - peso[objeto]] + valor[objeto] )
