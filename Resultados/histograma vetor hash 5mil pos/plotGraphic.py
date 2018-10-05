import matplotlib.pyplot as plt 
  
arquivo = open("saida-1.txt", "r")
conteudo = arquivo.read()
linha = conteudo.split()

x = []
y = []

counter = 0
for i in linha:
	if counter % 2 == 0:
		x.append(int(i))
	else:
		y.append(int(i))
	counter += 1
  
plt.plot(x, y) 
  
plt.xlabel('posições no vetor') 
plt.ylabel('ocupação por pos no vetor') 
  
plt.title('Histograma do vetor de hash com 5mil posições') 
plt.show()
