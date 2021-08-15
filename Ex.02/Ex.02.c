int main(void)
{
    int i = 0;
    while (i < 5)
    {
        ++i;
    }

    for (int j = 0; j < 5; ++j) 
    {
        i = j;
    }

    do
    {
        --i;
    } while (i > 0);

    switch (i)
    {
    case 0:
        ++i;
        break;

    case 1:
        --i;
        break;

    default:
        i = 72456;
    }

    if (i == 72456)
    {
        i = 0;
    }
    else
    {
        i = 3;
    }
    return i;
}