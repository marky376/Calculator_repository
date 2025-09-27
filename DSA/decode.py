import requests
from bs4 import BeautifulSoup

def decode_message(source_url):
    """Fetches a table from a webpage and prints an ASCII image based on (x, y, char) triplets."""
    # Get and parse the HTML content
    page_html = requests.get(source_url, timeout=10).text
    parser = BeautifulSoup(page_html, "html.parser")

    # Extract all rows and convert them into [x, char, y] format
    entries = []
    for tr in parser.find_all("tr"):
        cells = [td.text.strip() for td in tr.find_all("td")]
        if len(cells) == 3:
            entries.append(cells)

    # Skip header and filter valid coordinates
    coord_map = {}
    for x_str, ch, y_str in entries[1:]:
        if x_str.isdigit() and y_str.isdigit():
            x, y = int(x_str), int(y_str)
            coord_map[(x, y)] = ch

    # Determine the size of the output grid
    width = max(x for x, _ in coord_map) + 1
    height = max(y for _, y in coord_map) + 1

    # Initialize a blank grid
    output = [[" " for _ in range(width)] for _ in range(height)]

    # Place characters into the grid
    for (x, y), ch in coord_map.items():
        output[height - 1 - y][x] = ch  # Flip y to match top-down view

    # Display the ASCII image
    for line in output:
        print("".join(line))


if __name__ == "__main__":
    doc_link = "https://docs.google.com/document/d/e/2PACX-1vQGUck9HIFCyezsrBSnmENk5ieJuYwpt7YHYEzeNJkIb9OSDdx-ov2nRNReKQyey-cwJOoEKUhLmN9z/pub"
    decode_message(doc_link)
