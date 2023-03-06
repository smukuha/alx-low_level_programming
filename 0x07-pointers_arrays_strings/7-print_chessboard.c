void print_chessboard(char (*a)[8]) {
    int i, j;
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            if ((i + j) % 2 == 0) {
                _putchar('B');
            } else {
                _putchar('W');
            }
        }
        _putchar('\n');
    }
}
