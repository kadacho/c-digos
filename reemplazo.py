def procesar_texto(texto, vieja, nueva):
    """
    Función que realiza el reemplazo. 
    Python ya tiene un método llamado .replace() que hace magia por nosotros.
    """
    return texto.replace(vieja, nueva)

def menu():
    print("--- 📝 REEMPLAZADOR DE PALABRAS 1.0 ---")
    
    # Entrada de datos
    texto_base = input("Ingresa el texto original: ")
    palabra_buscar = input("¿Qué palabra quieres cambiar?: ")
    palabra_reemplazo = input("¿Por cuál palabra la quieres cambiar?: ")

    # Procesamiento
    resultado = procesar_texto(texto_base, palabra_buscar, palabra_reemplazo)

    # Salida
    print("\n--- ✅ Resultado ---")
    print(resultado)

if __name__ == "__main__":
    menu()