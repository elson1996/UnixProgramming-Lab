BEGIN{
    printf("REPORT\n");
    numOfEmployees=0;
}
{
    depts[$4] = $4
    empdept[numOfEmployees] = $4
    emps[numOfEmployees++] = $0;
}
END{
    for (dept in depts) {
        printf ("%s\n",dept)
        for(i=0;i<numOfEmployees;i++)   {
            if(empdept[i] == dept){
                printf("%s\n",emps[i]);
            }
        }
    }
}
