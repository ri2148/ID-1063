import pypdfium2 as pdfium
from PIL import Image

# Load the PDF document
pdf = pdfium.PdfDocument("input.pdf")
bw_images = []
threshold = 128

for page in pdf:
    # Render page to PIL Image
    image = page.render(scale=2).to_pil()
    
    # Convert to Grayscale -> Apply Threshold -> Convert to RGB
    gray = image.convert("L")
    bw = gray.point(lambda p: 255 if p >= threshold else 0, mode="1")
    bw_images.append(bw.convert("RGB"))

# Save as new PDF
if bw_images:
    bw_images[0].save("output_bw.pdf", save_all=True, append_images=bw_images[1:])

