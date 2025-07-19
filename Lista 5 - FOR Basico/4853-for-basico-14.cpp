#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    char mensagem[100];
    int x;
    
    fgets(mensagem, sizeof(mensagem), stdin);
    scanf("%d", &x);
    
    for(int i = 0; i < x; i++)
        printf("%s", mensagem);
    
    return 0;
}