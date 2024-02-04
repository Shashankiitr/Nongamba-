import matplotlib.pyplot as plt

# Define the data
x1 = [0.301, 0.477, 0.778, 1.04]
x2 = [0.477, 0.698, 1, 1.17]
y1 = [1000, 1050, 1100, 1150]
y1 = [1 / val for val in y1]
y2 = [1000, 1100, 1150, 1200]
y2 = [1 / val for val in y2]

# Create a new figure
plt.figure()

# Plot x1 vs. y1 in blue with markers
plt.plot(x1, y1, 'b-o', linewidth=2, markersize=8, label='y1')

# Plot x2 vs. y2 in red with squares
plt.plot(x2, y2, 'r-s', linewidth=2, markersize=8, label='y2')

# Add labels and legend
plt.xlabel('X')
plt.ylabel('Y')
plt.title('Plot of y1 and y2')
plt.legend(loc='best')

# Show the plot
plt.grid(True)
plt.show()
