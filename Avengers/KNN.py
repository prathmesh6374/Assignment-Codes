import pandas  as pd
import numpy as np
import matplotlib.pyplot as plt
import seaborn as sns
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import LabelEncoder,StandardScaler
from sklearn.metrics import accuracy_score, classification_report, confusion_matrix
from sklearn.neighbors import KNeighborsClassifier
from sklearn.svm import SVC
data=pd.read_csv('Toyota.csv')
le=LabelEncoder()
data['FuelType']=le.fit_transform(data['FuelType'])

x=data[['Price','FuelType','CC','Weight']]
y=data['Automatic']

x_train,x_test,y_train ,y_test=train_test_split(x,y,test_size=0.2)

print(x_train.shape,y_train.shape)

svm=SVC(kernel='linear')
svm.fit(x_train,y_train)

predict=svm.predict(x_test)
print(predict)



accuracy=accuracy_score(y_test,predict)

report=classification_report(y_test,predict)
print(accuracy,report)



knn=KNeighborsClassifier()
knn.fit(x_train,y_train)
predict=knn.predict(x_test)
accuracy=accuracy_score(y_test,predict)
report=classification_report(y_test,predict)
print(accuracy,report)

