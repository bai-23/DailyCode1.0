from tkinter import * 

root = Tk()

photo = PhotoImage(file = '')
textLabel = Label(root,
                  text = 'bye', 
                  justify = LEFT, 
                  padx = 10,
                  image = photo,
                  compound = CENTER,
                  font = ('微软雅黑', 20), 
                  fg = 'yellow')        
textLabel.pack(side = LEFT)


imgLabel = Label(root, image = photo)
imgLabel.pack()

mainloop()