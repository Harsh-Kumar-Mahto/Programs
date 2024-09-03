# Python can be used to perform operations on file(read & write)
# Two types of files:1.Text files(.txt,.docx,.log etc)   2.Binary files(.mp4,.mov,.png,.jpeg etc)

# We have to open a file before reading or writing
# f=open("file_name","mode")    mode is read,write etc
# data=f.read()
# f.close()

# modes:
# 1.'r': open for reading(default)
# 2.'w': open for writing,truncating the file first(trncating means first removing all the existing data of the file and then we can write in it)
# 3.'x': create a new file and open it for writing
# 4.'a': open for writing, appending to the end of the file if it exists
# 5.'b': binary mode (we have to write b along with r,w,a etc to open in binary form however since t is default it is not necessary to write t)
# 6.'t': text mode(default)
# 7.'+': open a disk file for updating(reading and writing)

# Read a file
textfile=open("24_File.txt",'r')
# data=textfile.read() #read entire file
# data=textfile.read(7)  #read the given number of characters
# print(data)
# print(type(data))
line1=textfile.readline()   #reads one line at a time
print(line1)
line2=textfile.readline()
print(line2)
textfile.close()

f=open("24_File.txt","w")  # in both w+ & w modes truncation will happen
f.write("I am learning Javascript.\n")   # replace the old data from the text file
f.close()

f=open("24_File.txt","a")  # in both a & a+ mode data can only be attached and no data is deleted
f.write("I am learning it from Apna College")  # appends the new data after the old data
f.close()

f=open("24_File.txt","r+")
f.write("Hi") # Start replacing the data in the old file with the new one from starting 
f.close()