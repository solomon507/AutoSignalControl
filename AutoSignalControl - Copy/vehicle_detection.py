import cv2,time
from PIL import Image
import numpy as np
import serial
import io

serial=serial.Serial('COM3', 9600, timeout=3)
cascade_src = 'cars.xml'
url1="1.png"
url2="2.png"
url3="4.png"
url4="3.png"

car_cascade = cv2.CascadeClassifier(cascade_src)
count={'count1':0,'count2':0,'count3':0,'count4':0}
urls=[url1,url2,url3,url4]

while True:
        cnt=0
        for url in urls:
            im=Image.open(url , mode='r')
            roi_img = im.crop(im.getbbox())
            img_byte_arr = io.BytesIO()
            roi_img.save(img_byte_arr,format='PNG')
            img_byte_arr = img_byte_arr.getvalue()
            imgNp=np.array(bytearray(img_byte_arr),dtype=np.uint8)
            img=cv2.imdecode(imgNp,-1)
            
            
            if (type(img) == type(None)):
                break
            gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
            
            cars = car_cascade.detectMultiScale(gray, 1.1, 1)
            
            
            for (x,y,w,h) in cars:
                
                    cv2.rectangle(img,(x,y),(x+w,y+h),(0,0,255),2)
                   
            cnt+=1
            count["count"+str(cnt)]=len(cars)
            cv2.imshow(url,img)
            cv2.waitKey(1)
        print(count)
        
        if(max(count.values())==count['count1']):
            print("LANE1")
            serial.write(str.encode('1'))
        elif(max(count.values())==count['count2']):
            print("LANE2")
            serial.write(str.encode('2'))
        elif(max(count.values())==count['count3']):
            print("LANE3")
            serial.write(str.encode('3'))
        elif(max(count.values())==count['count4']):
            print("LANE4")
            serial.write(str.encode('4'))
        
   



