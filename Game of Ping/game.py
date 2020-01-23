from tkinter import *
import menu
import pannel

#Main program
class Ping_Game(Frame):
	def __init__(self):
		Frame.__init__(self)
		self.master.geometry("800x600")
		self.master.title("Game of Ping")
		
		self.mbar = menu.MenuBar(self)
		self.mbar.pack(side = TOP, expand = NO, fill = X)
		
		self.game = pannel.Pannel(self)
		self.game.pack(expand = YES, fill = BOTH, padx = 8, pady = 8)
		
		self.pack()
		
	def options(self):
		opt = Toplevel(self)
		curL = Scale(opt, length = 200, label = "Number of lines: ", orient = HORIZONTAL, from_ = 4, to = 16, command = self.majLines)
		curL.set(self.game.nlig)
		curL.pack()
		curH = Scale(opt, length = 200, label = "Number of columns: ", orient = HORIZONTAL, from_ = 4, to = 16, command = self.majColumns)
		curH.set(self.game.ncol)
		curH.pack()
		
	def majColumns(self,n):
		self.game.ncol = int(n)
		self.game.traceGrid()
		
	def majLines(self,n):
		self.game.nlig = int(n)
		self.game.traceGrid()
		
	def reset(self):
		self.game.initGame()
		self.game.traceGrid()
		
	def principle(self):
		msg = Toplevel(self)
		Message(msg, bg = "navy", fg = "ivory", width = 400, font = "Helvetica 10 bold",
			text = "Each pieces possess a white side and a black side.\n"
                      "The game begins with all pieces in white side. Each times you click on a piece, the 8 adjacency pieces turns.\n"
                      "The purpose of the game is to have all the pieces in same color.").pack(padx = 10,pady = 10)
		
	def aAbout(self):
		msg = Toplevel(self)
		Message(msg, width = 200, aspect = 100, justify = CENTER,text = "Game of Ping\n\n" "MIT Licence\n\n"
			   "THIS PROGRAM IS GIVEN AS IT IS WITH NO WARRANTY OF NO KIND.").pack(padx = 10,pady = 10)
	
if __name__ == '__main__':
	Ping_Game().mainloop()
