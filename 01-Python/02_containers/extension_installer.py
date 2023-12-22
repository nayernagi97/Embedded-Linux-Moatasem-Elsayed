import pyautogui, os, time

# pyautogui.hotkey("win")
# pyautogui.write("vscode")
# pyautogui.hotkey("enter")clangd
time.sleep(3)
image_path = os.path.dirname(__file__) + "\extenstion_images"
extension_list = ["clangd", "c++ helper "]

extension_image_loc = pyautogui.locateCenterOnScreen(image_path + "\extension.png",confidence=0.7)
pyautogui.moveTo(extension_image_loc[0],extension_image_loc[1])
pyautogui.click()

for extension in extension_list:
    time.sleep(1)
    pyautogui.write("clangd")
    time.sleep(2)
    extension_image_loc = pyautogui.locateCenterOnScreen(image_path + f"\{extension}.png",confidence=0.7)
    pyautogui.moveTo(extension_image_loc[0],extension_image_loc[1])
    pyautogui.click()
    time.sleep(1)
    extension_image_loc = pyautogui.locateCenterOnScreen(image_path + "\install.png",confidence=0.7)
    pyautogui.moveTo(extension_image_loc[0],extension_image_loc[1])
    pyautogui.click()