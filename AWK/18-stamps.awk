{
    country[NR] = $1
    catalog[NR] = $2
    yoi[NR] = $3
    for (k = 4; k < NF ; k++)
    {
        desc[NR] = desc[NR] " " $k
    }
    if (length(desc[NR]) > maxlen)
    {
        maxlen = length(desc[NR])
    }
    price[NR] = $NF
}
END{
    for(k=1; k <= NR ; k++){
        printf "%-10s %-7s %4s", country[k],catalog[k], yoi[k]
        x = length(desc[k])
        printf "%s", desc[k]
        for (j = 0; j<=(maxlen -x) ; j++)
        {
            printf "%s", " "
        }
        printf "%s\n", price[k]
    }
}
