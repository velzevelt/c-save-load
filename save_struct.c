typedef struct {

    int a;
    int b;
    char string_data[128];

} save_struct;

void print_save_struct(save_struct *data)
{
    assert(data);

    printf(
        "a = %i\n"
        "b = %i\n"
        "string_data = %s\n",
        data->a, data->b, data->string_data);
}

save_struct prepare_save_struct()
{
    save_struct res = {0};
    res.a = 12;
    res.b = 14;

    const char save_string[] = "Some saved string123";
    memcpy(res.string_data, save_string, sizeof(save_string));
    return res;
}