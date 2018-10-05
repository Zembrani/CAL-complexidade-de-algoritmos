import matplotlib.pyplot as plt 
  
x = [5, 25, 50, 100, 100]
_hash = [0.0216252, 0.0586732, 0.153248, 0.296313, 0.277458]
_map = [0.0303909, 0.114257, 0.19541, 0.381162, 0.396598 ]
_vetor = [0.0133243, 0.0602602, 0.100192, 0.160497, 0.158739]

xaxis = [5, 25, 50, 100, 100]
plt.xticks(xaxis)

plt.plot(x, _hash, label = 'Vetor de Hash') 
plt.plot(x, _map, label = 'Árvore') 
plt.plot(x, _vetor, label = 'Vetor') 
  
plt.xlabel('Quantidade') 
plt.ylabel('Tempo (s)') 
  
plt.legend()
plt.title('Tempos para insersões') 
plt.show()