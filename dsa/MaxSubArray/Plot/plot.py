import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

df = pd.read_csv("data1.csv")

input = df['input_size'].to_numpy()
divide_and_conquer = df['divide_and_conquer'].to_numpy()
brute_force = df['brute_force'].to_numpy()

x = np.linspace(1, 1000, 1000)
y2 = x ** 2
y = x * np.log2(x)

fig1, (ax1, ax2) = plt.subplots(1, 2)
ax1.plot(x, y2)
ax2.plot(input, brute_force)

fig2, (ax1, ax2) = plt.subplots(1, 2)
ax1.plot(x, y)
ax2.plot(input, divide_and_conquer)

fig3, (ax1, ax2) = plt.subplots(1, 2)
ax1.plot(x, y)
ax1.plot(x, y2)
ax2.plot(input, divide_and_conquer)
ax2.plot(input, brute_force)

plt.show()