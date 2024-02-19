from bs4 import BeautifulSoup
import requests

soup = BeautifulSoup(requests.get('https://smart-lab.ru/q/shares/').text, 'html.parser')
stock = soup.find_all("tr")[2:]

# f = open("stock.txt", "wb")  # encoding="utf-8"

try:
    for i in stock:
        data = i.get_text("|").split("|")
        data = [j for j in data if '\n' != j][:-2]

        if not '%' in data[-1]:
            data = data[:-1]

        if not '\t' in data[4]:
            data[5] = data[5].split('%')[0].split('\t')[-1] + "%"
            data[6] = data[6].replace(" ", "")
            data[-3] = data[-3].replace(" ", "")

            source = data[:8]
            arg = data[-3:]
            data = source + [arg[0], arg[2]]

            print("|".join(data))
except Exception as e:
    print(repr(e))


