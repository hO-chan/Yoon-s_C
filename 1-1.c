#include <stdio.h>
//#include <wchar.h>
#include <string.h>

int main(){

    //wchar_t wchar[20];
    char cha[20] = {'a'};
    char endp;
    int i = 0;

    FILE* fwmy = fopen("C:\\Users\\user\\Desktop\\Code_Study\\Yoons_C\\CH24_FILE_IO\\Question1\\mystory.txt","w  t");
    if(fwmy == NULL){
        puts("File Open Error!");
        return -1;
    }

    while (1)
    {
        printf("#이름: ");
        scanf("%s",cha);                                            //scanf(,&cha)랑 scanf(,cha) 가 왜 결과가 같고 에러가 없지?, cha만 써야 되는거아닌? &cha 하면 어케되는?
        fputs("#이름: ",fwmy);
        fputs(cha,fwmy);
        /*{
            fprintf(fwmy,"%c%c",cha[i],cha[i+1]);
            
        }*/
                                          //파일에 한글로 젖아하고싶다.
        fflush(stdin);

        printf("#주민번호: ");
        fgets(cha,sizeof(cha),stdin);
        fputs("\n#주민번호: ",fwmy);    //위에선 scanf썼으니까.
        fputs(cha,fwmy);

        printf("#전화번호: ");
        fgets(cha,sizeof(cha),stdin);
        fputs("#전화번호: ",fwmy);
        fputs(cha,fwmy);

        endp = getchar();
        if(endp == EOF){
            break;
        }
        
    }
        

    //fgets(charr,sizeof(charr),stdin);//한국어 입/출력은 안댐.
    //fputs(charr,stdout);
    








    fclose(fwmy);
    return 0;
}