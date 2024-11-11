from sklearn.decomposition import PCA
from sklearn.preprocessing import StandardScaler
import pandas as pd
import numpy as np
import mathplotlib.pyplot as plt
data=pd.read_csv('wine.csv')
# Separate features and labels
X = data.drop(columns=["Wine"])  # Exclude the "Wine" class column
y = data["Wine"]  # Target class

# Standardize the data (PCA requires standardized data)
scaler = StandardScaler()
X_scaled = scaler.fit_transform(X)

# Apply PCA to reduce dimensionality
pca = PCA(n_components=2)  # We'll reduce to 2 components for visualization
X_pca = pca.fit_transform(X_scaled)

# Convert PCA result to a DataFrame
pca_df = pd.DataFrame(X_pca, columns=["PC1", "PC2"])
pca_df["Wine"] = y  # Add wine class back for visualization
print(pca_df)

