from math import*
from time import sleep

#il s'agit de recalculer la forme du cercle selon le rayon entre a la maniere d'un dessin vectoriel
#le but ici est d'aider un utilisateur a creer des formes pour dessiner

q=["rayon du cercle ? stop[0] : \n","position du cercle ? : \n"];#je stock les questions dans une liste elles seront appelees dans une liste
var=[0,0]#on va stocker le rayon du cercle et sa position ici
on=1#boucle activee
while on==1:#tant que on vaut 1
    for i in range(2):#on entre les valeurs de rayon et distance 2 valeur donc range 2
        var[i]=int(input(q[i]))#on pose la question correspondante a la variable entree
        if var[0]==0:#entrer 0 pour mettre fin au programme
            on=0#fin de la grande boucle
            break#fin de la petite boucle
    slp=1/(var[0]*var[0]*3.14)#latence inversement proportionnelle au rayon
    for i in range(var[0]*2):#hauteur vaut deux fois le rayon, nombre de lignes
        for y in range(var[1]):#les espace avant le disque determinant sa position
            print(" ", end="")#espace sans retour a la ligne
        for j in range(var[0]*2):#largeur vaut deux fois le rayon, nombre de colonnes
            dist = sqrt((var[0]-i)*(var[0]-i) + (var[0]-j)*(var[0]-j))#calcul de la distance au centre du cercle ici la racine de la distance horizontale au carre plus la distance verticale au carre
            if dist<var[0]:#si le curseur se trouve a l'interieur du rayon
                #sleep(slp)#on peut attendre
                print("**", end="")#on dessine le cercle sans retour a la ligne
            else:
                #sleep(slp)
                print("  ", end="")#espace avant d'entrer dans le rayon du cercle
        print("")#retour a la ligne apres chaque ligne


