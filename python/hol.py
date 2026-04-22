from time import sleep; import random

if __name__ == '__main__':
	vm1 = 30
	vm2 = 30
	v1 = 1
	v2 = 1
	turno = 0
	dano1 = 0
	dano2 = 0
	print("Introduzca el nombre del jugador 1")
	j1 = input()
	print("")
	print("Introduzca el nombre del jugador 2")
	j2 = input()
	print("")
	print("Moneda al aire...")
	turno = random.randint(1, 2)
	sleep(2)
	while v1>0 and v2>0:
		if turno==1:
			# Comienzo del turno j1
			print("")
			print(j1,":",vm1,"HP")
			print(j2,":",vm2,"HP")
			print("Es turno de",j1)
			sleep(1)
			print("¿Ataca? (si/no)")
			a = input()
			# Daño de j1
			if a=="si":
				dano1 = random.randint(7, 15)
				vm2 = vm2-dano1
				# Mensajes de daño o victoria
				if vm2<=0:
					print(j2,"ha perdido toda su vida.")
					sleep(1)
					print(f"¡{j1} Gana!")
					v1 = 0
				else:
					print("Se ha infligido",dano1,"de daño, a",j2,"le queda",vm2,"de vida.")
					sleep(2)
					print("")
				# Daño no afligido
			else:
				print(j1,"no ha atacado, a",j2,"le queda",vm2,"de vida.")
				sleep(2)
				print("")
		elif turno==2:
			# Comienzo del turno j1
			print("") # no hay forma directa de borrar la pantalla con Python estandar
			print(j1,":",vm1,"HP")
			print(j2,":",vm2,"HP")
			print("Es turno de",j2)
			sleep(1)
			print("¿Ataca? (si/no)")
			a = input()
			# Daño de j2
			if a=="si":
				dano2 = random.randint(7, 15)
				vm1 = vm1-dano2
				# Mensajes de daño o victoria
				if vm1<=0:
					print(j1,"ha perdido toda su vida.")
					sleep(1)
					print(f"¡{j2} Gana!")
					v2 = 0
				else:
					print("Se ha infligido",dano2,"de daño, a",j1,"le queda",vm1,"de vida.")
					sleep(2)
					print("")
				# Daño no afligido
			else:
				print(j2,"no ha atacado, a",j1,"le queda",vm1,"de vida.")
				sleep(2)
				print("")
		# Cambio de turno
		if turno==1:
			turno = 2
		else:
			turno = 1
		# ---

