import pyautogui
from PIL import Image,ImageGrab
import time

def takeScreenshot():
    image = ImageGrab.grab().convert("L")
    return image

def isCollide(data):
    for i in range(710,865):
        for j in range (280,300):
            if data[i,j]<100:
                return True


time.sleep(3)

while True:
    image = ImageGrab.grab().convert("L")
    data = image.load()
    if isCollide(data):
        pyautogui.keyDown("up")



























