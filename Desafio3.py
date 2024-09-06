import json

def ler_json(caminho_arquivo):
    with open(caminho_arquivo, 'r') as arquivo:
        return json.load(arquivo)

def calcular_estatisticas(dados):
    faturamentos = [item['valor'] for item in dados]
    
    if not faturamentos:
        return None, None, 0 
    
    menor_faturamento = min(faturamentos)
    maior_faturamento = max(faturamentos)
    media_faturamento = sum(faturamentos) / len(faturamentos)
    
    dias_acima_da_media = sum(1 for valor in faturamentos if valor > media_faturamento)
    
    return menor_faturamento, maior_faturamento, dias_acima_da_media

caminho_arquivo = 'C:/Users/grper/Downloads/dados.json'

dados = ler_json(caminho_arquivo)

menor, maior, dias_acima_media = calcular_estatisticas(dados)

print(f"Menor valor de faturamento: R${menor:.2f}")
print(f"Maior valor de faturamento: R${maior:.2f}")
print(f"Número de dias com faturamento acima da média: {dias_acima_media}")
