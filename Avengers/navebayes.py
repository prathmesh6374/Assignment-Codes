import numpy as np
import pandas as pd

from sklearn.linear_model import LinearRegression
import matplotlib.pyplot as plt
from sklearn.preprocessing import LabelEncoder,StandardScaler
from sklearn.svm import SVC
from sklearn.naive_bayes import GaussianNB
from sklearn.model_selection import train_test_split
from sklearn.metrics import accuracy_score
le=LabelEncoder()
data=pd.read_csv('Social_Network_Ads.csv')

data['Gender']=le.fit_transform(data['Gender'])
x=data[['Gender','Age','EstimatedSalary']]
y=data['Purchased']





x_train,x_test,y_train,y_test=train_test_split(x,y,test_size=0.2)

gn=GaussianNB()
gn.fit(x_train,y_train)
ypredict=gn.predict(x_test)
print(accuracy_score(ypredict,y_test))

