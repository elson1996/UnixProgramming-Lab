BEGIN{
    sum=0;
}
{
    sum = sum + $NR;
}
END{
    printf("Trace: %d",sum);
}
