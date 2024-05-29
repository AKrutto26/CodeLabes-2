def find_duplicates(nums):
    
    duplicates = []
    #duplicate numbers will be  inserted here
    
    seen = set()
    
    for num in nums:
        
        if num in seen:
            duplicates.append(num)
            
        else:
            seen.add(num)
    return duplicates

def main():
    
    nums = [4, 3, 2, 7, 8, 2, 3, 1]
    duplicates = find_duplicates(nums)
    print("Duplicates:", duplicates)

if __name__ == "__main__":
    main()
