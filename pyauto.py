
import pyautogui
import time
time.sleep(2)
pyautogui.write("import timeimport pyautoguiimport pymsgbox",interval=0.01)



screenWidth,screenHeight = pyautogui.size()
print(screenWidth,screenHeight)

print(pyautogui.position())
#pyautogui.moveTo(700,456)
#pyautogui.moveTo(2,1079)
#pyautogui.doubleClick()
print(pyautogui.easeInOutQuad)

#pyautogui.moveTo(1000,700,duration=2,tween=pyautogui.easeInOutQuad)
#pyautogui.moveTo(20,700,duration=2,tween=pyautogui.linear)
#pyautogui.moveTo(1000,700,duration=2,tween=pyautogui.easeOutElastic)
#pyautogui.moveTo(20,700,duration=2,tween=pyautogui.easeInCubic)
#pyautogui.alert("This is an alert message to display")
#pyautogui.write("This is a statement",interval=0.25)

distance = 200
"""
while distance > 0:
    pyautogui.drag(distance,0)
    distance-=5
    pyautogui.drag(0,distance)
    pyautogui.drag(-distance,0)
    distance-=5
    pyautogui.drag(0,-distance)
 
"""
   
   
tim = 400
"""
while tim > 0:
     pyautogui.drag(tim,0)
     tim-=5
     pyautogui.drag(0,tim)
     pyautogui.drag(-tim,0)
     tim-=5   
     pyautogui.drag(0,-tim)
"""   
   
#pyautogui.click('5.png')   
#pyautogui.dragTo(100,200,4,button='left')   
pyautogui.scroll(-10)   
                                                                                                
im = pyautogui.screenshot('jhjhjhjhjhjhjhjhjh.png',region=(0,0,300,400))                                                                        
                                                                        
                                                                                
                                                                        
                                                                        
                                                                
   
   
   
   
   
   






