import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
from sklearn.preprocessing import LabelEncoder,StandardScaler
from sklearn.model_selection import train_test_split
from sklearn.metrics import accuracy_score,classification_report
from sklearn.linear_model import LinearRegression

data=pd.read_csv('Mall_Customers.csv')
print(data.head())

x=data['Annual Income (k$)']
y=data['Spending Score (1-100)']
x=np.array(x).reshape(-1,1)
y=np.array(y).reshape(-1,1)
lr=LinearRegression()
lr.fit(x,y)
predict=lr.predict([[34],[35]])
print(lr.coef_)
print(lr.intercept_)
print(lr.intercept_*x+lr.coef_)

      

