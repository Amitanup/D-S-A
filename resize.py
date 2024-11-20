import os
from PIL import Image

# Define paths
input_dir = "C:\Users\amitk\OneDrive\Pictures"
output_dir = "C:\Users\amitk\OneDrive\Desktop\a"
target_size = (256, 256)  # Resize dimensions
quality = 85  # Compression quality

# Ensure output directory exists
os.makedirs(output_dir, exist_ok=True)

# Function to process and save each image
def process_image(filename):
    try:
        image_path = os.path.join(input_dir, filename)
        img = Image.open(image_path)

        # Resize image
        img = img.resize(target_size, Image.ANTIALIAS)

        # Save resized and compressed image
        output_path = os.path.join(output_dir, filename)
        img.save(output_path, quality=quality, optimize=True)
        print(f"Processed {filename}")

    except Exception as e:
        print(f"Failed to process {filename}: {e}")

# Process each image in the input directory
for filename in os.listdir(input_dir):
    if filename.lower().endswith((".jpg", ".jpeg", ".png")):
        process_image(filename)
