import matplotlib.pyplot as plt 
  
x = [5, 25, 50, 100, 100]
_hash = [0.00233616, 0.0127773, 0.0123249, 0.0321996, 0.0968699]
_map = [0.00396894, 0.020148, 0.0262221, 0.0669143, 0.189484]
_vetor = [0.104899, 2.87962, 4.55406, 11.2927, 35.7025]

xaxis = [5, 25, 50, 100, 100]
plt.xticks(xaxis)

plt.plot(x, _hash, label = 'Vetor de Hash') 
plt.plot(x, _map, label = 'Árvore') 
plt.plot(x, _vetor, label = 'Vetor') 
  
plt.xlabel('Quantidade') 
plt.ylabel('Tempo (s)') 
  
plt.legend()
plt.title('Tempos para Buscas') 
plt.show()