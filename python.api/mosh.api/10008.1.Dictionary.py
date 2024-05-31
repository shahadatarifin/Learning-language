customer = {
    "name": "Shahadat Arifin", 
    "age": 20, 
    "is_verified": True
}
print(customer["name"])

customer["email"] = "xyz@gmail.com"         # add new value
print(customer["email"])

customer["name"] = "Onim"                   #update
print(customer["name"])

print(customer.get("birthday", "july 21"))  #define a value
