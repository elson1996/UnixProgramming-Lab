BEGIN{
    printf("Line\tFields\tLast");
}
{
    printf("\n%d\t%d\t%s",NR,NF,$NF);
}
END{
    printf("\nNumber of lines: %d\n",NR)
    printf("Last line last fild: %s\n",$NF)
}
