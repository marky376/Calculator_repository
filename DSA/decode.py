import requests
import pandas as pd
from bs4 import BeautifulSoup 

# Helper function to fetch the document from a given URL
def fetch_document(url):
    try:
        response = requests.get(url)
        response.raise_for_status()
        soup = BeautifulSoup(response.text, 'html.parser')

        document_text = soup.get_text(separator="\n")
        return document_text 
    except requests.exceptions.HTTPError as http_err:
        print(f"HTTP error occurred: {http_err}")
    except requests.exceptions.RequestException as req_err:
        print(f"Request error occurred: {req_err}")
    return None

# Helper function to parse the document text into a DataFrame
def parse_data(document_text):
    data = []
    lines = document_text.splitlines()
    
    # Find the start index after the headers
    start_index = 0
    for i, line in enumerate(lines):
        if line.strip() == "x-coordinate":
            start_index = i + 1  # Start parsing after this line
            break
    
    # Parse the data lines
    for i in range(start_index, len(lines)):
        try:
            # Read the x-coordinate
            x = int(lines[i].strip())
            # Read the character on the next line
            char = lines[i + 1].strip()
            # Read the y-coordinate on the next line
            y = int(lines[i + 2].strip())
            data.append((x, y, char))
            # Move the index forward by 3 to skip to the next set of data
            i += 2  # This will be incremented in the for loop
        except (ValueError, IndexError) as e:
            print(f"Skipping line due to error: {e} - Line content: {lines[i:i+3]}")
            continue
    
    return pd.DataFrame(data, columns=["x", "y", "char"])

# Helper function to create a 2D grid from the DataFrame
def create_grid(data):
    if data.empty:
        print("No data to display.")  # Debug statement
        return []
    data['x'] = data['x'].astype(int)
    data['y'] = data['y'].astype(int)
    max_x, max_y = data["x"].max(), data["y"].max()
    grid = [[" " for _ in range(max_x + 1)] for _ in range(max_y + 1)]
    for _, row in data.iterrows():
        grid[row["y"]][row["x"]] = row["char"]
    return grid

# Helper function to print the 2D grid
def print_grid(grid):
    if not grid:
        print("Empty grid, nothing to display.")
    for row in grid:
        print("".join(row))

# Main function that takes the URL and prints the grid
def decode_secret_message(url):
    print(f"Fetching document from URL: {url}")  # Debug statement
    document_text = fetch_document(url)
    print("Document fetched successfully. Parsing data...")  # Debug statement
    data = parse_data(document_text)
    print(f"Parsed data:\n{data}")  # Debug statement
    grid = create_grid(data)
    print("Printing grid...")  # Debug statement
    print_grid(grid)

# Example usage
url = "https://docs.google.com/document/d/e/2PACX-1vQGUck9HIFCyezsrBSnmENk5ieJuYwpt7YHYEzeNJkIb9OSDdx-ov2nRNReKQyey-cwJOoEKUhLmN9z/pub"
decode_secret_message(url)
