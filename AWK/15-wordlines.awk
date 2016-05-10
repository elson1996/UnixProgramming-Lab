BEGIN{
    numWords = 0;
    numLines = 0;
}
{
    numLines++;
    numWords += NF;
}
END{
    printf("Number of words: %d\n",numWords);
    printf("Number of lines: %d\n",numLines);
}
