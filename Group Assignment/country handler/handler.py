ls = []

ostream = ""

file = open("country list.txt.txt", "r")

for line in file:
    line = line.rstrip()
    if line != "":
        ls.append(line)

for curr in ls:
    ostream = ostream + "USSR_button_map.insert(pair<std::string, QPushButton*>(\"" + curr + "\", ui->" + curr + "USSR));\n"
    ostream = ostream + "USA_button_map.insert(pair<std::string, QPushButton*>(\"" + curr + "\", ui->" + curr + "USA));\n \n"

write_file = open("country list.txt", "a")
write_file.write(ostream)
write_file.close()