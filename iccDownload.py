import os
import sys
import requests
from urllib.parse import urlparse, urljoin

if len(sys.argv) < 2:
    print("Usage: python download_file.py <URL>")
    sys.exit(1)

url = sys.argv[1]

base_url = url.rstrip("/") + "/"
file_name_template = base_url + "{}.png"

i = 1
while True:
    file_url = file_name_template.format(i)
    response = requests.get(file_url)
    if response.status_code != requests.codes.ok:
        break
    file_name = os.path.basename(urlparse(file_url).path)
    with open(file_name, "wb") as file:
        file.write(response.content)
    print("Downloaded {}".format(file_name))
    i += 1

if i == 2:
    print("No files found.")
else:
    print("Downloaded {} files.".format(i - 1))
