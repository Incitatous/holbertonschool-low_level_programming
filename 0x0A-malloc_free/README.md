0. Float like a butterfly, sting like a bee
Write a function that creates an array of chars, and initializes it with a specific char.

Prototype: char *create_array(unsigned int size, char c);
Returns a pointer to the array, or NULL if it fails

1. The woman who has no imagination has no wings 
Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

Prototype: char *_strdup(char *str);
The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.
On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available
FYI: The standard library provides a similar function: strdup. Run man memset to learn more.

2. He who is not courageous enough to take risks will accomplish nothing in life
Write a function that concatenates two strings.

Prototype: char *string_concat(char *s1, char *s2);
The returned pointer shall point to a newly allocated space in memory, which contains s1, followed by s2, and null terminated
If the function fails, it should return NULL

3. If you even dream of beating me you'd better wake up and apologize
Write a function that returns a pointer to a newly created 2 dimensional integers grid.

Prototype: int **alloc_grid(int width, int height);
Each element of the grid should be initialized to 0
If the function fails, it should return NULL

4. It's not bragging if you can back it up
Write a function that frees a 2 dimensional grid previously created by alloc_grid.

Prototype: void free_grid(int **grid, int height);

5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe
Write a function that concatenates all the arguments of your program.

Prototype: char *argstostr(int ac, char **av);
Returns a pointer to a new string, or NULL if it failes
Each argument should be followed by a \n in the new string

