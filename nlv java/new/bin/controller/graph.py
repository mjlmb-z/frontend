import matplotlib.pyplot as plt
import pandas as pd

dataset = pd.read_csv("math mini - Monthly Average.csv")
arr = dataset.to_numpy()
x=[]
y=[]
for row in arr:
    x.append(row[0])
    y.append(row[1])
def best_fit(x, y):

    xbar = sum(x)/len(x)
    ybar = sum(y)/len(y)
    n = len(x) # or len(Y)

    numer = sum([xi*yi for xi,yi in zip(x, y)]) - n * xbar * ybar
    denum = sum([xi*2 for xi in x]) - n * xbar*2

    b = numer / denum
    a = ybar - b * xbar

    print('best fit line:\ny = {:.2f} + {:.2f}x'.format(a, b))

    return a, b

# solution
a, b = best_fit(x, y)


plt.xlabel("Confirmed cases")
plt.ylabel("Recovered cases")


plt.scatter(x,y)
yfit = [a + b * xi for xi in x]
plt.plot(x, yfit,color = '#FF6600')
plt.show()