Comp = ./
Flag1 = < Entradas/entrada-1.txt
Flag2 = < Entradas/entrada-2.txt
Flag3 = < Entradas/entrada-3.txt
Flag4 = < Entradas/entrada-4.txt
Flag5 = < Entradas/entrada-5.txt

Cod1 = vetor 
Cod2 = map
Cod3 = hash

all:
	$(Comp)$(Cod1) $(Flag1)  
	$(Comp)$(Cod1) $(Flag2)  
	$(Comp)$(Cod1) $(Flag3)  
	$(Comp)$(Cod1) $(Flag4)  
	$(Comp)$(Cod1) $(Flag5) 

	$(Comp)$(Cod2) $(Flag1)  
	$(Comp)$(Cod2) $(Flag2)  
	$(Comp)$(Cod2) $(Flag3)  
	$(Comp)$(Cod2) $(Flag4)  
	$(Comp)$(Cod2) $(Flag5) 

	$(Comp)$(Cod3) $(Flag1)  
	$(Comp)$(Cod3) $(Flag2)  
	$(Comp)$(Cod3) $(Flag3)  
	$(Comp)$(Cod3) $(Flag4)  
	$(Comp)$(Cod3) $(Flag5)
