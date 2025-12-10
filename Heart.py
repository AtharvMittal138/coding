import math
from turtle import *
def hearta(t):
    return 16 * math.sin(t) ** 3
def heartb(t):
    return 13 * math.cos(t) - 5 * math.cos(2 * t) - 2 * math.cos(3 * t) - math.cos(4 * t)
speed(0)
bgcolor("black")
color("red")
penup()
goto(hearta(0), heartb(0))
pendown()

for t in range(0, 360):
    x = hearta(math.radians(t)) * 10 # scale up
    y= heartb(math.radians(t)) * 10
    goto(x, y)
done()