import numpy as np
import matplotlib.pyplot as plt
import matplotlib.patches as mpatch
import matplotlib.lines as mlines

#X-axis with 0.5 increments
x = np.arange(0,4)

#Results for BO in OD_660
BO_stat_37 = np.array([0.123,0.34,0.443,0.56])        #Static incubation at 37 Celsius degrees
BO_air_37 = np.array([0.123,0.4,0.915,1.21])          #Incubation with air at 37 Celsius degrees
BO_stat_room = np.array([0.123,0.189,0.284,0.412])    #Static incubation in room temperature

#Results for Davis growth medium in OD_600
DV_stat_37 = np.array([0.113,0.115,0.14,0.2])         #Static incubation at 37 Celsius degrees
DV_air_37 = np.array([0.113,0.17,0.16,0.235])         #Incubation with air at 37 Celsius degrees
DV_stat_room = np.array([0.113,0.14,0.117,0.158])     #Static incubation in room temperature

red_patch = mpatch.Patch(color="red", label = "Inkubacja w napowietrzaniu i 37 stopniach C")
green_patch = mpatch.Patch(color="green", label = "Inkubacja statyczna w 37 stopniach C")
blue_patch = mpatch.Patch(color = "blue", label = "Inkubacja statyczna w temp. pok.")
DV_black_line = mlines.Line2D([], [], color="black", marker="o", label ="Podłoże minimalne Davisa", linestyle="--")
BO_black_line = mlines.Line2D([],[], color="black", marker="^", label = "Bulion odżywczy")

plt.plot(x, BO_stat_37, "g^", x, BO_air_37, "r^", x, BO_stat_room, "c^", x, BO_stat_37, "g", x, BO_air_37, "r", x,BO_stat_room, "b",
         x, DV_stat_37, "go", x, DV_air_37, "ro", x, DV_stat_room, "co", x, DV_stat_37, "g--", x, DV_air_37, "r--", x, DV_stat_room, "b--")
plt.legend(handles=[red_patch, green_patch, blue_patch, DV_black_line, BO_black_line], bbox_to_anchor=(0.75, 1.15))
plt.xlabel("Czas inkubacji [h]")
plt.ylabel("Gęstość optyczna hodowli OD_600")
plt.show()
