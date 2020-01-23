from tkinter import *

class MenuBar(Frame):
	def __init__(self,boss = None):
		Frame.__init__(self, borderwidth = 2, relief = GROOVE)
		# Menu <Files> #
		fileMenu = Menubutton(self, text = 'Files')
		fileMenu.pack(side = LEFT, padx = 5)
		me1 = Menu(fileMenu)
		me1.add_command(label = 'Options', underline = 0, command = boss.options)
		me1.add_command(label = 'Restart', underline = 0, command = boss.reset)
		me1.add_command(label = 'Exit', underline = 0, command = boss.quit)
		fileMenu.configure(menu = me1)
		
		#Menu <Help>
		helpMenu = Menubutton(self,text = 'Help')
		helpMenu.pack(side = LEFT, padx = 5)
		me1 = Menu(helpMenu)
		me1.add_command(label = 'Rules', underline = 0, command = boss.principle)
		me1.add_command(label = 'About ...', underline = 0, command = boss.aAbout)
		helpMenu.configure(menu = me1)
