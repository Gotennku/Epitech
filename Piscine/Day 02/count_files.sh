#!/bin/bash 

# Comptez le nombre de fichiers normaux dans le dossier actuel et ses sous-dossiers
count=$(find . -type f | wc -l)  # Compte le nombre de fichiers réguliers dans le dossier courant et ses sous-dossiers

# Afficher le décompte
echo "Le nombre de fichiers est de : $count"
