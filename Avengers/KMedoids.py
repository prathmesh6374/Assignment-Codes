import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
from sklearn.preprocessing import StandardScaler
from sklearn_extra.cluster import KMedoids

data=pd.read_csv('Social_Network_Ads.csv')


print(data.head())

x=data[['Age','EstimatedSalary']]

sc=StandardScaler()
xscaled=sc.fit_transform(x)

kmedoids=KMedoids(n_clusters=2,random_state=20)
kmedoid_cluster=kmedoids.fit_predict(xscaled)

print("the scaled data is",kmedoid_cluster)
print("centroid of the medoid is",kmedoids.cluster_centers_)


plt.scatter(xscaled[kmedoid_cluster==0,0],xscaled[kmedoid_cluster==0,1],color='red',label='medoid 1')
plt.scatter(xscaled[kmedoid_cluster==1,0],xscaled[kmedoid_cluster==1,1],color='blue',label='medoid 2')
plt.xlabel('predicted age')
plt.ylabel('predicted Salary')
plt.legend()
plt.show()
