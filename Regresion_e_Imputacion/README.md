# Imputación de datos
Es el proceso de reemplazar valores faltantes (o datos ausentes) en un conjunto de datos por valores estimados o calculados, con el objetivo de mantener la integridad del conjunto de datos y permitir un análisis o modelado más completo. Básicamente, cuando en una columna o variable del conjunto de datos se presentan valores nulos, vacíos o perdidos (por errores de medición, problemas de registro, etc.), se imputa un valor para “rellenar” esa ausencia.
## ¿Para qué sirve?

1. **Evitar la eliminación de datos incompletos:**
   - Si existen muchas filas con valores faltantes, eliminarlas produciría una **reducción significativa** de la muestra y, por ende, de la información disponible.
   - La imputación, en lugar de desechar, aprovecha más datos y puede **mejorar** la robustez del análisis.

2. **Mantener la consistencia** en análisis estadísticos o modelos:
   - Algunos algoritmos de aprendizaje automático o estadísticos requieren no tener valores faltantes para poder entrenar y generar resultados.
   - Imputar permite a estos algoritmos procesar el dataset sin interrumpir el flujo de trabajo.

3. **Preservar relaciones** entre variables:
   - La imputación, si se realiza apropiadamente, puede aproximar los valores faltantes de forma coherente al resto de las variables.
   - Esto evita sesgos que surgirían al eliminar de manera sistemática ciertas filas o columnas.

4. **Tratar datos en tiempo real:**
   - En escenarios donde la información llega incompleta (sensores, encuestas online), la imputación ayuda a mantener un **dataset** utilizable sin interrumpir la operación.


## ¿Cuándo es útil?

1. **Pocos datos faltantes:**
   - Si el **porcentaje de valores ausentes** es moderado o bajo (p. ej. menos del 5-10% dependiendo de la situación), la imputación suele funcionar bien y **recuperar** esas celdas puede reducir la pérdida de información.

2. **Mecanismo de ausencia aleatorio** (Missing at Random, MAR) o Missing Completely at Random (MCAR):
   - Cuando podemos suponer que la falta de datos **no** está fuertemente correlacionada con la variable faltante misma ni con otras variables, la imputación simple (promedio, mediana) tiende a producir menos sesgos.

3. **Datasets grandes:**
   - Cuanto mayor sea la muestra, a menudo es más factible estimar valores cercanos a la realidad para las celdas faltantes, con métodos avanzados (k-NN, regresiones múltiples, algoritmos de machine learning, etc.).

4. **Cuando se tiene información contextual:**
   - Si conocemos la distribución de los datos, reglas lógicas, correlaciones con otras variables, se puede usar esa información para imputar de forma **más fiable**.
## ¿Cuándo NO es útil o puede ser riesgoso?

1. **Mecanismo de datos faltantes no aleatorio** (Missing Not at Random, MNAR):
   - **Ejemplo:** Si los pacientes con valores de azúcar muy altos tienden a no presentarse a exámenes médicos, “imputar” un valor promedio podría enmascarar una relación importante.
   - En estos casos, la imputación puede **introducir sesgo** y distorsionar conclusiones.

2. **Gran cantidad de faltantes:**
   - Si el porcentaje de datos ausentes es extremadamente alto (p. ej. más del 50%), la imputación se vuelve muy incierta. Es posible que no exista un fundamento estadístico sólido para “reconstruir” semejante porción del dataset.

3. **Falta de modelos adecuados o información contextual:**
   - Si no se tienen correlaciones o variables auxiliares para “adivinar” razonablemente un valor faltante, imputar puede ser prácticamente **adivinar sin base**.

4. **Análisis crítico de sensibilidad:**
   - En ciertos entornos (médicos, financieros), imputar valores críticos puede llevar a **decisiones arriesgadas** si no se incluye un análisis de sensibilidad que muestre la incertidumbre generada por la imputación.
# Formas Comunes de Imputación

- **Media o Mediana:**
  - Sencilla de aplicar, pero ignora la variabilidad real.
  - Puede distorsionar la correlación entre variables.

- **Moda** (para variables categóricas).

- **k-Nearest Neighbors (k-NN):**
  - Estima los valores faltantes basándose en la similitud con instancias “vecinas”.

- **Regresión Múltiple:**
  - Usa variables relacionadas para predecir la ausente.

- **MICE (Multiple Imputation by Chained Equations):**
  - Método iterativo y robusto que modela los datos faltantes múltiples veces para reflejar la incertidumbre.

- **Algoritmos de Machine Learning** (Random Forest, XGBoost) entrenados para predecir valores faltantes.
# Conclusión

La **imputación de datos** es útil cuando ayuda a preservar la mayor parte de la información, evitando eliminar filas o columnas, especialmente bajo supuestos de que los datos faltantes son aleatorios o se puede inferir con base en variables asociadas. Sin embargo, **no** es un remedio absoluto y puede **introducir sesgos** si se ignora el mecanismo real de ausencia o si el porcentaje de ausentes es demasiado elevado.

Por ello, es fundamental **evaluar** la naturaleza de los datos faltantes, el **porcentaje** de ausencias y la **metodología** de imputación para determinar si es razonable utilizarla y **cómo** analizar sus consecuencias (por ejemplo, mediante un análisis de sensibilidad o comparando distintos métodos de imputación).

