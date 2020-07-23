import sys
import easygui as g
if g.ccbox("ARE?",choices=("YES","BYE")):
    g.msgbox("NOMO")
else:
     sys.exit(0)
#ynbox与ccbox相同