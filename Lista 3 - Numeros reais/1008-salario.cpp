#include <cstdio>

int main(){
    int employee_id, employee_time;
    double employee_salary;
        
    scanf("%d", &employee_id);
    scanf("%d", &employee_time);
    scanf("%le", &employee_salary);
    
    printf("NUMBER = %d\n", employee_id);
    printf("SALARY = U$ %.2f\n", (employee_salary*employee_time));
   
    return 0;
}