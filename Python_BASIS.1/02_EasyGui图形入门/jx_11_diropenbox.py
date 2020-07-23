import easygui
msg = '选择一个文件，将会返回该文件的完整的目录'
title = '文件选择对话框'
default = r'C:\\pycharm'
full_file_path = easygui.diropenbox(msg,title,default)
print('选择的文件的完整的路径为：'+str(full_file_path))