import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

df = pd.read_csv("data3.csv")

input = df['input_size'].to_numpy()
divide_and_conquer = df['divide_and_conquer'].to_numpy()
brute_force = df['brute_force'].to_numpy()

plt.plot(input, divide_and_conquer)
plt.plot(input, brute_force)
plt.show()