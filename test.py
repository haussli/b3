#!/usr/bin/env python3

import wx, sys;
if sys.version_info[0] < 3 and sys.version_info[1] < 5:
    print("Error: minimum python version is 3.5", file=sys.stderr)
    sys.exit(1)
ins = wx.VersionInfo()

import encodings.utf_8
import encodings.latin_1
import scrollplay as b3

class b3ext(b3.mframe): 
   def __init__(self,parent): 
      b3.mframe.__init__(self,parent)  

#   def OnInit(self):
#        wx.InitAllImageHandlers()
#        self.main = b3.b3(None)
#        self.main.Show()
#        self.SetTopWindow(self.main)
#        return True

   def OnQuit(self,event): 
        print("wtf")
        sys.exit(0)

def main():        
    app = wx.App(False) 
    frame = b3ext(None) 
    frame.Show(True) 
    app.MainLoop() 

if __name__ == '__main__':
    main()

#
#def main():
#    import logging
#    log = logging.getLogger('b3')
#    application = b3ext(None)
#    application.MainLoop()
#
#if __name__ == '__main__':
#    main()
