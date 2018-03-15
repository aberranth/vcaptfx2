const char* config_txt = {"\
\n\
#common parameters for all machine profiles\n\
common:\n\
{\n\
    vid=0x04b4; #vid/pid\n\
    pid=0x8613;\n\
    usb_freq=12000000;\n\
    framebuffer_width=640;\n\
    framebuffer_height=288;\n\
    h_counter_shift=-73;\n\
    v_counter_shift=-17;\n\
    clk_inverted=true;\n\
    sync_bit_mask=0x10;   # which bit is sync\n\
    inv_bits=0x00;        # will be xored with input data\n\
    pixel_bits_mask=0x0f; # which bits encode pexel color\n\
# mask in colors can be binary string like \"0101\" or integer like 0x05 or 5\n\
    colors=({ mask=\"0000\"; color=0x000000; bw=0x00},\n\
            { mask=\"0100\"; color=0x0000B0; bw=0x2c},\n\
            { mask=\"0001\"; color=0xB00000; bw=0x42},\n\
            { mask=\"0101\"; color=0xB000B0; bw=0x58},\n\
            { mask=\"0010\"; color=0x00B000; bw=0x6e},\n\
            { mask=\"0110\"; color=0x00B0B0; bw=0x84},\n\
            { mask=\"0011\"; color=0xB0B000; bw=0x9a},\n\
            { mask=\"0111\"; color=0xB0B0B0; bw=0xb0},\n\
            { mask=\"1000\"; color=0x000000; bw=0x00},\n\
            { mask=\"1100\"; color=0x0000FF; bw=0x50},\n\
            { mask=\"1001\"; color=0xFF0000; bw=0x71},\n\
            { mask=\"1101\"; color=0xFF00FF; bw=0x8f},\n\
            { mask=\"1010\"; color=0x00FF00; bw=0x9f},\n\
            { mask=\"1110\"; color=0x00FFFF; bw=0xbf},\n\
            { mask=\"1011\"; color=0xFFFF00; bw=0xe3},\n\
            { mask=\"1111\"; color=0xFFFFFF; bw=0xff}\n\
            );\n\
}\n\
\n\
# individual machine settings override common\n\
\n\
machines:\n\
(\n\
    {\n\
        name=\"MS-0511\";\n\
        inv_bits=0x0f;\n\
        usb_freq=12500000;\n\
    },\n\
    {\n\
        name=\"BK0010-01\";            \n\
\n\
        inv_bits=0x08; # will be xored with input data\n\
        colors=({ mask=0x00; color=0x000000; bw=0x00},\n\
                { mask=0x04; color=0x0000FF; bw=0x00},\n\
                { mask=0x01; color=0xFF0000; bw=0x00},\n\
                { mask=0x05; color=0xFF00FF; bw=0x00},\n\
                { mask=0x02; color=0x00FF00; bw=0x00},\n\
                { mask=0x06; color=0x00FFFF; bw=0x00},\n\
                { mask=0x03; color=0xFFFF00; bw=0x00},\n\
                { mask=0x07; color=0xFFFFFF; bw=0x00},\n\
                { mask=0x08; color=0x000000; bw=0xFF},\n\
                { mask=0x0C; color=0x0000FF; bw=0xFF},\n\
                { mask=0x09; color=0xFF0000; bw=0xFF},\n\
                { mask=0x0D; color=0xFF00FF; bw=0xFF},\n\
                { mask=0x0A; color=0x00FF00; bw=0xFF},\n\
                { mask=0x0E; color=0x00FFFF; bw=0xFF},\n\
                { mask=0x0B; color=0xFFFF00; bw=0xFF},\n\
                { mask=0x0F; color=0xFFFFFF; bw=0xFF}\n\
                );\n\
    },\n\
    {\n\
        name=\"ZX-Spectrum\";            \n\
\n\
        clk_inverted=true;            \n\
        inv_bits=0x00; # will be xored with input data\n\
        usb_freq=8000000;\n\
        \n\
    }\n\
)\n\
"
    };
