#!/bin/bash

# Vérifie si un message de commit est fourni en tant que paramètre
if [ $# -eq 0 ]; then
    echo "Utilisation : $0 <message_de_commit>"
    exit 1
fi

# Ajoute tous les fichiers du répertoire actuel à la zone de préparation Git
git add .

# Effectue un commit des modifications avec le message de commit fourni
git commit -m "$1"

# Pousse les modifications vers le dépôt
git push
