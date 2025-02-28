# Sugerencia:
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import seaborn as sns
import os
import os
os.chdir("C:/Users/Pentium Gold/Documents/GitHub/Programacion-UP-2025-2/Regresion_e_Imputacion")

import pandas as pd
data = pd.read_csv("taxi_trip_pricing.csv")
data.info()
data.isna().sum()