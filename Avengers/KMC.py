# Import necessary libraries
import pandas as pd
from sklearn.preprocessing import StandardScaler
from sklearn.cluster import KMeans
import matplotlib.pyplot as plt

# Load the dataset
file_path = 'Social_Network_Ads.csv'  # Update the file path
data = pd.read_csv(file_path)

# Select features for clustering
X = data[['Age', 'EstimatedSalary']]

# Scale the features to normalize data ranges
scaler = StandardScaler()
X_scaled = scaler.fit_transform(X)

# Apply K-Means with 2 clusters
kmeans = KMeans(n_clusters=2, random_state=42)
kmeans_clusters = kmeans.fit_predict(X_scaled)

# Display K-Means cluster labels and centroids
print("K-Means Cluster Labels:", kmeans_clusters)
print("Centroids:\n", kmeans.cluster_centers_)

# Plot the clusters

plt.scatter(X_scaled[kmeans_clusters == 0, 0], X_scaled[kmeans_clusters == 0, 1], color='blue', label='Cluster 0')
plt.scatter(X_scaled[kmeans_clusters == 1, 0], X_scaled[kmeans_clusters == 1, 1], color='orange', label='Cluster 1')

plt.xlabel("Age (scaled)")
plt.ylabel("Estimated Salary (scaled)")
plt.title("K-Means Clustering on Age and Estimated Salary")
plt.legend()
plt.show()
