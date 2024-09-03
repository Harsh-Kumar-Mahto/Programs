# Dictionary are used to store data values in key:value pairs
# They are unordered,mutable & don't allow duplicate keys

# We can make an empty dictionary by simply writing dic={}

dict={
    "name":"Harsh",
    "cgpa":8.2,
    "score":[81,82,83],
}
print(dict)
dict["score"][0]=83
print(dict)
dict["surname"]="Mahto"  #This new key:value will be added to the touple
print(dict)

# nested dictionary
student={
    "name":"Raunak",
    "marks":{
        "phy":97,
        "chem":98,
        "math":95
    }
}
print(student)
print(student["marks"])
print(student["marks"]["chem"])

# Dictionary methods

# 1. Keys: returns all keys in the form of dict_keys
print(student.keys())
print(list(student.keys()))  # typecasting into list

# 2. Values: return all values in the form of dict_values
print(student.values())
print(list(student.values()))  # typecasting into list

# 3. Items: returns all (key,value) pairs in tuples
print(student.items()) #can also be typecasted
# We can access elements with indices but for that we have to first typecast it into list
pairs=list(student.items())
print(pairs[0])

# 4. Get: returns the value of the key
print(student.get("name")) 
# difference between this and the previous technique student["name"] is that here we get none if the key doesn't exist whereas in previous one we will get an error

# 5. Update: inserts the specified items to the dictionary
student.update({"city":"goa"})
print(student)
new_dic={"name":"Harsh","age":20}  #name will get updated since that key already exists
student.update(new_dic)
print(student)