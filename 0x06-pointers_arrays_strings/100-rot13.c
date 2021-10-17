#include "main.h"
/**
 * rot13 - takes an input string and rotates every alphabetical
 * character by +13
 *
 * @str: string to be processed
 *
 * Return: processed string
 */
char *rot13(char *str)
{

        int pos_str;
        int pos_rot;
        char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
        char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

        for (pos_str = 0; str[pos_str] != 0; pos_str++)
        {
                for (pos_rot = 0; letters[pos_rot] != 0; pos_rot++)
                {

                        if (str[pos_str] == letters[pos_rot])
                        {
                                str[pos_str] = rot[pos_rot];
                                break;
                        }
                }
        }

        return (str);
}
