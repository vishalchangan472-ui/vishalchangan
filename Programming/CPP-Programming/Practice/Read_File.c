#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = 0;
    int ret = 0;
    char arr[20];

    fd = open("Marvellous.txt", O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file");
    }
    else
    {
        printf("File gets opened with fd : %d\n", fd);

        ret = read(fd, arr, 6);

        printf("%d bytes gets read from the file \n", ret);

        printf("%s\n", arr);
        
        
    }

    close(fd);

    
    return 0;
}
