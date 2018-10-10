import matplotlib.pyplot as plt 
  
x = [5, 25, 50, 100, 100]
_hash = [0.0243231, 0.0708191, 0.168058, 0.337552, 0.399216]
_map = [0.0343599, 0.134405, 0.221632, 0.448076, 0.586082]
_vetor = [0.118224, 2.93988, 4.65426, 11.4532, 35.8613]

xaxis = [5, 25, 50, 100, 100]
plt.xticks(xaxis)

plt.plot(x, _hash, label = 'Vetor de Hash') 
plt.plot(x, _map, label = 'Árvore') 
plt.plot(x, _vetor, label = 'Vetor') 
  
plt.xlabel('Quantidade') 
plt.ylabel('Tempo (s)') 
  
plt.legend()
plt.title('Tempos Total') 
plt.show()