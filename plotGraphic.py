# importing the required module 
import matplotlib.pyplot as plt 
  
arquivo = open("saida-1.txt", "r")
conteudo = arquivo.read()
linha = conteudo.split()
# x axis values 
x = []
# corresponding y axis values 
y = []
counter = 0
for i in linha:
	if counter % 2 == 0:
		y.append(int(i))
	else:
		x.append(int(i))
	counter += 1
  
# plotting the points  
plt.plot(x, y) 
  
# naming the x axis 
plt.xlabel('x - axis') 
# naming the y axis 
plt.ylabel('y - axis') 
  
# giving a title to my graph 
plt.title('Istograma do hash para 5000 valores') 
# function to show the plot 
plt.show()