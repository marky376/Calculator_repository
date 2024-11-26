import pytesseract
from PIL import Image, ImageFilter
import re
import json

# Load and preprocess the image
def preprocess_image(image_path):
    # Load the image
    image = Image.open(image_path)
    
    # Convert to grayscale
    image = image.convert('L')
    
    # Optionally apply filters (e.g., sharpen)
    image = image.filter(ImageFilter.SHARPEN)

    # Resize the image to improve OCR accuracy (optional)
    image = image.resize((image.width * 2, image.height * 2), Image.LANCZOS)  # Use LANCZOS instead of ANTIALIAS

    return image

# Perform OCR and extract data
def extract_data(image):
    # Perform OCR using pytesseract
    text = pytesseract.image_to_string(image, lang='eng', config='--psm 6')
    
    # Print the raw OCR output for debugging
    print("Raw OCR Output:\n", text)

    # Extract relevant data using regular expressions
    items = []
    total = ""

    # Regular expressions to find the relevant data
    item_pattern = re.compile(r"USAGE OF HALL\s+(\d+HRS)\s+(\d{1,3}(?:,\d{3}))\s+(\d{1,3}(?:,\d{3})\.\d{2})")
    total_pattern = re.compile(r"TOTAL\s+:\s+₦\s+(\d{1,3}(?:,\d{3})*\.\d{2})")

    # Find all items
    for match in item_pattern.finditer(text):
        description = "USAGE OF HALL"
        duration = match.group(1)
        rate = match.group(2)
        amount = match.group(3)
        items.append({
            "description": description,
            "duration": duration,
            "rate": rate,
            "amount": amount
        })

    # Find total amount
    total_match = total_pattern.search(text)
    if total_match:
        total = total_match.group(1)

    return items, total

# Main function to run the script
def main(image_path):
    try:
        # Preprocess the image
        image = preprocess_image(image_path)

        # Extract data from the image
        items, total = extract_data(image)

        # Create JSON structure
        data = {
            "items": items,
            "total": total
        }

        # Output the JSON
        json_output = json.dumps(data, indent=4)
        print(json_output)

    except Exception as e:
        print(f"An error occurred: {e}")

# Run the main function
if __name__ == "__main__":
    image_path = 'images/extraction.jpg'
    main(image_path)