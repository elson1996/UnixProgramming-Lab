BEGIN{
}
{
    numWords += NF;
}
END{
    printf("Number of words: %d\n",numWords);
    printf("Number of lines: %d\n",NR);
}
