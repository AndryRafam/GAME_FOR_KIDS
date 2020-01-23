from tkinter import *

# Game pannel resizable
class Pannel(Frame):
	def __init__(self, boss = None):
		Frame.__init__(self)
		self.nlig, self.ncol = 4,4
		self.bind("<Configure>", self.redim)
		# Canevas
		self.can = Canvas(self,bg = "dark blue", borderwidth = 0, highlightthickness = 1, highlightbackground = "white")
		self.can.bind("<Button-1>",self.clic)
		self.can.pack()
		self.initGame()
		
	def initGame(self):
		self.state = []
		for i in range(16):
			self.state.append([0]*16)
			
	def redim(self,event):
		self.width, self.height = event.width -4, event.height -4
		self.traceGrid()
		
	def traceGrid(self):
		# Maximal height and width for squares
		lmax = self.width/self.ncol
		hmax = self.height/self.nlig
		self.cote = min(lmax,hmax)
		Width, Height = self.cote*self.ncol, self.cote*self.nlig
		self.can.configure(width = Width, height = Height)
		self.can.delete(ALL)
		s = self.cote
		for l in range(self.nlig-1):
			self.can.create_line(0,s,Width,s,fill="white")
			s+=self.cote
		s = self.cote
		for c in range(self.ncol-1):
			self.can.create_line(s,0,s,Height,fill = "white")
			s+=self.cote
		for l in range(self.nlig):
			for c in range(self.ncol):
				x1 = c*self.cote+5
				x2 = (c+1)*self.cote-5
				y1 = l*self.cote+5
				y2 = (l+1)*self.cote-5
				colo = ["white","black"][self.state[l][c]]
				self.can.create_oval(x1,y1,x2,y2,outline = "grey", width = 1, fill=colo)
				
	def clic(self,event):
		lin, col = int(event.y/self.cote), int(event.x/self.cote)
		for l in range(lin-1,lin+2):
			if l < 0 or l >= self.nlig:
				continue
			for c in range(col-1,col+2):
				if c < 0 or c >= self.ncol:
					continue
				if l == lin and c == col:
					continue
				self.state[l][c] = not(self.state[l][c])
		self.traceGrid()
