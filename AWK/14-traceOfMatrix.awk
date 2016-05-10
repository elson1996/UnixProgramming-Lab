BEGIN{
    dig=1;
    sum=0;
}
{
    sum = sum + $dig;
    dig++;
}
END{
    printf("Trace: %d",sum);
}
