#include <stdio.h>
#include <stdio.h>
#include <string.h>

int EgAPP_Tool_CharacterSeparation(char *Character,char Separation, char DPTlist[16][256])
{
	int child=0;
	char *p, *q;
    char *p_end;
    char buf[256] ="\0";

    for(p = q = Character, p_end = p + strlen(Character); p < p_end; p ++)
    {
        if(*p == Separation)
        {
            memset(buf,0x00,sizeof(buf));
            memcpy(buf, q, p - q);
            //printf("buf : %s\n", buf);
			strcpy((char *)DPTlist[child], buf);
			child ++;
            q = p + 1;
            p ++;
        }
        if(*(p) > 0x80 || *(p) < 0)
            p ++;
    }
	return child;
}

int main(int argc, char *argv[])
{
	char Character[] = "XZ0009571|630102199104090044|²Ü­|›V|";
    printf("Character :%s\n", Character);

    char DPTlist[16][256];

    memset(DPTlist, 0x00, sizeof(DPTlist));
    EgAPP_Tool_CharacterSeparation(Character, '|', DPTlist);

    for(auto i = 0; i < 16; i ++)
    {
        printf("%s\n", DPTlist[i]);
        if(0 >= strlen(DPTlist[i]))
            break;
    }

	return 0;
}
