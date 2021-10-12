from math import*
from time import sleep

#il s'agit de recalculer la forme du cercle selon le rayon entre a la maniere d'un dessin vectoriel
#le but ici est d'aider un utilisateur a creer des formes pour dessiner

q=["rayon du cercle ? stop[0] : \n","position du cercle ? : \n"];
var=[0,0]
on=1
while on==1:
    for i in range(2):
        var[i]=int(input(q[i]))
        if var[0]==0:
            on=0
            break
    slp=1/(var[0]*var[0]*3.14)
    for i in range(var[0]*2):
        for y in range(var[1]):
            print(" ", end="")
        for j in range(var[0]*2):
            dist = sqrt((var[0]-i)*(var[0]-i) + (var[0]-j)*(var[0]-j))
            if dist<var[0]:
                #sleep(slp)
                print("**", end="")
            else:
                #sleep(slp)
                print("  ", end="")
        print("")


