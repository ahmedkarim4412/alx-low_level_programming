/**                                                                                                                                 
 * _putchar - writes the character c to stdout                                                                                   
 * @c: The character to spring
 *
 * Return: On success 1.
 * On error, -1 is retruned, and error is set appropraitly.
 */ 
                                                                                                                                   
int _putchar(char c)                                                                                                                
{                                                                                                                                   
	        return (write(1, &c, 1));                                                                                           
}                                  
