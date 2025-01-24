# Ajuste de Datos con Mínimos Cuadrados (Regresión Lineal)

En este documento presentamos el **método de mínimos cuadrados** para ajustar una recta a un conjunto de datos $(x_i, y_i)$. El objetivo es encontrar los parámetros $\alpha$ y $\beta$ de la ecuación de la forma:

```math
y = \alpha x + \beta
```

que mejor se adapte a los datos en el sentido de minimizar la suma de los errores cuadrados.

# 1. Planteamiento del Problema

Supongamos que tenemos un conjunto de $n$ puntos experimentales $\{(x_i, y_i)\}_{i=1}^n$. Queremos encontrar la recta $y = \alpha x + \beta$ que “mejor” se ajuste a ellos. Formalmente, definimos la **función de error** $S(\alpha, \beta)$ como la suma de los cuadrados de las diferencias (residuos) entre los valores observados $y_i$ y los valores predichos $\alpha x_i + \beta$:

$$
S(\alpha, \beta) = \sum_{i=1}^n \left( y_i - (\alpha x_i + \beta) \right)^2.
$$

El **método de mínimos cuadrados** consiste en minimizar $S(\alpha, \beta)$ respecto de $\alpha$ y $\beta$.

---

# 2. Derivación de las Ecuaciones Normales

Para encontrar el mínimo, calculamos las derivadas parciales de $S(\alpha, \beta)$ respecto a $\alpha$ y $\beta$ y las igualamos a cero:

1. **Derivada con respecto a $\alpha$:**

$$
\frac{\partial S}{\partial \alpha} = -2 \sum_{i=1}^n x_i \left( y_i - (\alpha x_i + \beta) \right) = 0.
$$

2. **Derivada con respecto a $\beta$:**

$$
\frac{\partial S}{\partial \beta} = -2 \sum_{i=1}^n \left( y_i - (\alpha x_i + \beta) \right) = 0.
$$

Quitando el factor común $-2$ (que no afecta la igualdad a cero), obtenemos el siguiente sistema de ecuaciones:

$$
\begin{cases}
\sum_{i=1}^n x_i^2 \alpha + \sum_{i=1}^n x_i \beta = \sum_{i=1}^n x_i y_i, \\
\sum_{i=1}^n x_i \alpha + n \beta = \sum_{i=1}^n y_i.
\end{cases}
$$

Reordenando, se suelen expresar como **ecuaciones normales**:

$$
\begin{cases}
\alpha \sum_{i=1}^n x_i^2 + \beta \sum_{i=1}^n x_i = \sum_{i=1}^n x_i y_i, \\
\alpha \sum_{i=1}^n x_i + n \beta = \sum_{i=1}^n y_i.
\end{cases}
$$

---

# 3. Resolución para $\alpha$ y $\beta$

Partiendo de las ecuaciones normales:

$$
\begin{cases}
\alpha \sum_{i=1}^n x_i^2 + \beta \sum_{i=1}^n x_i = \sum_{i=1}^n x_i y_i, \\
\alpha \sum_{i=1}^n x_i + n \beta = \sum_{i=1}^n y_i.
\end{cases}
$$

## 3.1. Expresión de $\beta$

Despejamos $\beta$ a partir de la segunda ecuación:

$$
n \beta = \sum_{i=1}^n y_i - \alpha \sum_{i=1}^n x_i \quad \Rightarrow \quad \beta = \frac{\sum_{i=1}^n y_i - \alpha \sum_{i=1}^n x_i}{n}.
$$

## 3.2. Sustitución en la primera ecuación

Sustituimos $\beta$ en la primera ecuación:

$$
\alpha \sum_{i=1}^n x_i^2 + \left( \frac{\sum_{i=1}^n y_i - \alpha \sum_{i=1}^n x_i}{n} \right) \sum_{i=1}^n x_i = \sum_{i=1}^n x_i y_i.
$$

Multiplicamos todo por $n$ para simplificar denominadores:

$$
n \alpha \sum_{i=1}^n x_i^2 + \left( \sum_{i=1}^n y_i - \alpha \sum_{i=1}^n x_i \right) \sum_{i=1}^n x_i = n \sum_{i=1}^n x_i y_i.
$$

Desarrollamos:

$$
n \sum_{i=1}^n x_i^2 \alpha + \sum_{i=1}^n x_i \sum_{i=1}^n y_i - \alpha \left( \sum_{i=1}^n x_i \right)^2 = n \sum_{i=1}^n x_i y_i.
$$

Agrupamos términos que contienen $\alpha$:

$$
\alpha \left( n \sum_{i=1}^n x_i^2 - \left( \sum_{i=1}^n x_i \right)^2 \right) = n \sum_{i=1}^n x_i y_i - \left( \sum_{i=1}^n x_i \right) \sum_{i=1}^n y_i.
$$

Finalmente, despejamos $\alpha$:

$$
\alpha = \frac{n \sum_{i=1}^n x_i y_i - \left( \sum_{i=1}^n x_i \right) \sum_{i=1}^n y_i}{n \sum_{i=1}^n x_i^2 - \left( \sum_{i=1}^n x_i \right)^2}.
$$

Y luego recuperamos $\beta$ sustituyendo $\alpha$ de nuevo:

$$
\beta = \frac{\sum_{i=1}^n y_i - \alpha \sum_{i=1}^n x_i}{n}.
$$

---

# 4. Expresiones Finales

Por lo tanto, las **fórmulas de mínimos cuadrados** para la recta $y = \alpha x + \beta$ son:

$$
\alpha = \frac{n \sum_{i=1}^n (x_i y_i) - \left( \sum_{i=1}^n x_i \right) \left( \sum_{i=1}^n y_i \right)}{n \sum_{i=1}^n x_i^2 - \left( \sum_{i=1}^n x_i \right)^2},
$$

$$
\beta = \frac{\sum_{i=1}^n y_i - \alpha \sum_{i=1}^n x_i}{n}.
$$

# 5. Ejemplo: Crecimiento Celular 

Para ilustrar este modelo, supongamos que medimos el **número de células (o biomasa)** en distintos instantes de tiempo en un cultivo de bacterias.

---

## 2. Datos de Ejemplo

Imaginemos que se mide la **concentración de células** (en millones por mililitro) cada media hora. A continuación, una tabla con los datos medidos:

|$tiempo_h$|Células (millones/mL)|
|---|---|
|0.0|0.1|
|0.5|0.12|
|1.0|0.16|
|1.5|0.2|
|2.0|0.22|
|2.5|0.28|
|3.0|0.37|
|3.5|0.44|
|4.0|0.5|
|4.5|0.65|



## 3. Ejercicio: Ajuste con Regresión Lineal 
Implementa la regresión lineal para los datos proporcionados en la tabla y el archivo ```datos_crecimiento.csv```. 

# 6. Ejemplos de Regresión Múltiple

Cuando existe más de una variable que influye en el fenómeno, se recurre a la **regresión lineal múltiple**, donde la variable dependiente se explica por varias variables independientes.

## 1. Rendimiento Deportivo

- **Fenómeno:** El rendimiento de un atleta (p. ej., goles en fútbol, puntos en un partido de baloncesto, velocidad final en una carrera) puede depender de múltiples factores: horas de entrenamiento, calidad de la dieta, horas de descanso y motivación.

- **Modelo:**

$$
Rendimiento = \beta_0 + \beta_1 (\text{Horas Entrenamiento}) + \beta_2 (\text{Calidad de la Dieta}) + \beta_3 (\text{Horas de Sueño}) 
$$

