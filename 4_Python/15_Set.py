# Set is the collection of the unordered items. Each element in the set must be unique & immutable. Set itself is mutable, elements in it must be immutable
# List and dictionary are not stored in set as they are mutable whereas set is immutable

# Empty set is created by writing set_name=set()   , we can't use set_name={} as it is already dedicated for empty dictionary 

set_name={1,2,3,4,"hi",2,5} # since 2 is duplicated,it is taken only once automatically and also order may not be same as we give
print(set_name)
print(type(set_name))

collection= set()
print(len(collection))

# Set methods
collection={2,4,6,8}

# 1. Add:adds the element
collection.add(10)
print(collection)

# 2. Remove:removes the element
collection.remove(10)
print(collection)

# 3. Clear: empties the set
collection.clear()
print(collection)  # Empty set

collection={2,4,8,"abc"}
# 4. Pop: removes a random value
print(collection.pop())

# 5. Union: combines both set values and return a new union set, doesn't change original sets
set1={1,2,3}
set2={2,3,4}
print(set1.union(set2))

# 6. Intersection: combines common values and returns a new set
print(set1.intersection(set2))