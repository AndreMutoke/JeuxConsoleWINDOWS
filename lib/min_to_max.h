#ifndef MIN_TO_MAX_H_INCLUDED
#define MIN_TO_MAX_H_INCLUDED

char min_to_max(char c)
{
    char l;
    if(c>='A' && c<='Z')
    {
        l = c;
    }
    else if(c>='a' && c<='z')
    {
        l = (c - ('a' - 'A'));
    }
    return l;
}

#endif // MIN_TO_MAX_H_INCLUDED






