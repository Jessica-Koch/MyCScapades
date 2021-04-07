
float total = 0.0;
short count = 0;
short tax_percent = 6;

float add_with_tax(float f)
{
    float tax_rate = 1 + tax_percent / 100.0; // if this .0 wasn't added, it would always return 0 because 6 / 100 == 0 in integer arithmatic
    total = total + (f * tax_rate);
    count = count + 1;

    return total;
}