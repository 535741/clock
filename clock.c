#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ncurses.h>
#include <time.h>

void one(int y, int x){  
    mvprintw(y, x,   "  ____   ");
    mvprintw(y+1, x, " |    |  ");
    mvprintw(y+2, x, "  |   |  ");
    mvprintw(y+3, x, "  |   |  ");
    mvprintw(y+4, x, "  |   |  ");
    mvprintw(y+5, x, "  |   |  ");
    mvprintw(y+6, x, "  |___|  ");
}

void two(int y, int x){
    mvprintw(y, x,   " _______ "); 
    mvprintw(y+1, x, "|       |");
    mvprintw(y+2, x, "|____   |");
    mvprintw(y+3, x, " ____|  |");
    mvprintw(y+4, x, "| ______|");
    mvprintw(y+5, x, "| |_____ ");
    mvprintw(y+6, x, "|_______|");
}

void three(int y, int x){
    mvprintw(y, x,   " _______ "); 
    mvprintw(y+1, x, "|       |");
    mvprintw(y+2, x, "|___    |");
    mvprintw(y+3, x, " ___|   |");
    mvprintw(y+4, x, "|___    |");
    mvprintw(y+5, x, " ___|   |");
    mvprintw(y+6, x, "|_______|");
}

void four(int y, int x){
    mvprintw(y, x,   " _   ___ ");
    mvprintw(y+1, x, "| | |   |");
    mvprintw(y+2, x, "| |_|   |");
    mvprintw(y+3, x, "|       |");
    mvprintw(y+4, x, "|___    |");
    mvprintw(y+5, x, "    |   |");
    mvprintw(y+6, x, "    |___|");
}

void five(int y, int x){
    mvprintw(y, x,   " _______ "); 
    mvprintw(y+1, x, "|       |");
    mvprintw(y+2, x, "|   ____|");
    mvprintw(y+3, x, "|  |____ ");
    mvprintw(y+4, x, "|_____  |");
    mvprintw(y+5, x, " _____| |");
    mvprintw(y+6, x, "|_______|");
}

void six(int y, int x){
    mvprintw(y, x,   " ___     "); 
    mvprintw(y+1, x, "|   |    ");
    mvprintw(y+2, x, "|   |___ ");
    mvprintw(y+3, x, "|    _  |");
    mvprintw(y+4, x, "|   | | |");
    mvprintw(y+5, x, "|   |_| |");
    mvprintw(y+6, x, "|_______|");
}

void seven(int y, int x ){
    mvprintw(y, x,   " _______ ");
    mvprintw(y+1, x, "|       |");
    mvprintw(y+2, x, "|___    |");
    mvprintw(y+3, x, "    |   |");
    mvprintw(y+4, x, "    |   |");
    mvprintw(y+5, x, "    |   |");
    mvprintw(y+6, x, "    |___|");
}

void eight(int y, int x){
    mvprintw(y, x,   "  _____  ");
    mvprintw(y+1, x, " |  _  | ");
    mvprintw(y+2, x, " | |_| | ");
    mvprintw(y+3, x, "|   _   |");
    mvprintw(y+4, x, "|  | |  |");
    mvprintw(y+5, x, "|  |_|  |");
    mvprintw(y+6, x, "|_______|");
}

void nine(int y, int x){
    mvprintw(y, x,   " _______ ");
    mvprintw(y+1, x, "|  _    |");
    mvprintw(y+2, x, "| | |   |");
    mvprintw(y+3, x, "| |_|   |");
    mvprintw(y+4, x, "|___    |");
    mvprintw(y+5, x, "    |   |");
    mvprintw(y+6, x, "    |___|");
}

void zero(int y, int x){
    mvprintw(y, x,   " _______ ");
    mvprintw(y+1, x, "|  _    |");
    mvprintw(y+2, x, "| | |   |");
    mvprintw(y+3, x, "| | |   |");
    mvprintw(y+4, x, "| |_|   |");
    mvprintw(y+5, x, "|       |");
    mvprintw(y+6, x, "|_______|");
}

void numeral(int y, int x, int in){
    switch (in){
        case 1:
            one(y, x);
            break;
        case 2:
            two(y, x);
            break;
        case 3:
            three(y, x);
            break;
        case 4:
            four(y, x);
            break;
        case 5:
            five(y, x);
            break;
        case 6:
            six(y, x);
            break;
        case 7:
            seven(y, x);
            break;
        case 8:
            eight(y, x);
            break;
        case 9:
            nine(y, x);
            break;
        case 0:
            zero(y, x);
            break;
    }
}

void weekday(int y, int x, int wday){
    switch(wday){
        case 0:
            mvprintw(y, x,     "   __           ");
            mvprintw(y + 1, x, "  (_  / /  )\\ ) "); 
            mvprintw(y + 2, x, "  __)(_/  (  (  ");
            break;
        case 1:
            mvprintw(y, x,     "        _       ");
            mvprintw(y + 1, x, " )\\/)  / )  )\\ )");
            mvprintw(y + 2, x, "(  (  (_/  (  ( ");
            break;
        case 2:
            mvprintw(y, x,     "  ___     ___   ");
            mvprintw(y + 1, x, "   )  / / )_    ");
            mvprintw(y + 2, x, "  (  (_/ (__    ");
            break;
        case 3:
            mvprintw(y, x,     "       ___  __  ");
            mvprintw(y + 1, x, "\\    / )_   ) ) ");
            mvprintw(y + 2, x, " \\/\\/ (__  /_/  ");
            break; 
        case 4:
            mvprintw(y, x,     "___          __ ");
            mvprintw(y + 1, x, " )   )_) / / )_)");
            mvprintw(y + 2, x, "(   ( ( (_/ / \\ ");
            break;
        case 5:
            mvprintw(y, x,     "   ___ __   ___ ");
            mvprintw(y + 1, x, "   )_  )_)   )  ");
            mvprintw(y + 2, x, "  (   / \\  _(_  ");
            break;
        case 6:
            mvprintw(y, x,     "    __  _ ___   ");
            mvprintw(y + 1, x, "   (_  )_) )    ");
            mvprintw(y + 2, x, "   __)/ / (     ");
            break;
    }
}

void month(int y, int x, int mon){
    switch(mon){      
        case 0:
            mvprintw(y, x,     "    _   __    _    ");
            mvprintw(y + 1, x, "   | | / /\\  | |\\ |");
            mvprintw(y + 2, x, " \\_|_|/_/--\\ |_| \\|");
            break;
        case 1:
            mvprintw(y, x,     "  ____  ____  ___  ");
            mvprintw(y + 1, x, " | |_  | |_  | |_) ");
            mvprintw(y + 2, x, " |_|   |_|__ |_|_) ");
            break;
        case 2:
            mvprintw(y, x,     "  _      __    ___ ");
            mvprintw(y + 1, x, " | |\\/| / /\\  | |_)");
            mvprintw(y + 2, x, " |_|  |/_/--\\ |_| \\");
            break;
        case 3:
            mvprintw(y, x,     "  __    ___   ___  ");
            mvprintw(y + 1, x, " / /\\  | |_) | |_) ");
            mvprintw(y + 2, x, "/_/--\\ |_|   |_| \\ ");
            break;
        case 4:
            mvprintw(y, x,     "  _      __    _   ");
            mvprintw(y + 1, x, " | |\\/| / /\\  \\ \\_/");
            mvprintw(y + 2, x, " |_|  |/_/--\\  |_| ");
            break;
        case 5:
            mvprintw(y, x,     "    _   _     _    ");
            mvprintw(y + 1, x, "   | | | | | | |\\ |");
            mvprintw(y + 2, x, " \\_|_| \\_\\_/ |_| \\|");
            break;
        case 6:
            mvprintw(y, x,     "    _   _     _    ");
            mvprintw(y + 1, x, "   | | | | | | |   ");
            mvprintw(y + 2, x, " \\_|_| \\_\\_/ |_|__ ");
            break;
        case 7:
            mvprintw(y, x,     "  __    _     __   ");
            mvprintw(y + 1, x, " / /\\  | | | / /`_ ");
            mvprintw(y + 2, x, "/_/--\\ \\_\\_/ \\_\\_/ ");
            break;
        case 8:
            mvprintw(y, x,     "   __   ____  ___  ");
            mvprintw(y + 1, x, "  ( (` | |_  | |_) ");
            mvprintw(y + 2, x, "  _)_) |_|__ |_|   ");
            break;
        case 9:
            mvprintw(y, x,     "   ___   __  _____ ");
            mvprintw(y + 1, x, "  / / \\ / /`  | |  ");
            mvprintw(y + 2, x, "  \\_\\_/ \\_\\_  |_|  ");
            break;
        case 10:
            mvprintw(y, x,     "  _      ___   _    ");
            mvprintw(y + 1, x, " | |\\ | / / \\ \\ \\  /");
            mvprintw(y + 2, x, " |_| \\| \\_\\_/  \\_\\/ "); 
            break;
        case 11:
            mvprintw(y, x,     "   ___   ____  __  ");
            mvprintw(y + 1, x, "  | | \\ | |_  / /` ");
            mvprintw(y + 2, x, "  |_|_/ |_|__ \\_\\_ ");
            break;
    }
}
void done(int y, int x){
    mvprintw(y, x,     "    ");
    mvprintw(y + 1, x, " /| ");
    mvprintw(y + 2, x, "  | ");
}

void dtwo(int y, int x){
    mvprintw(y, x,     " __ ");
    mvprintw(y + 1, x, "  _)");
    mvprintw(y + 2, x, " /__");
}

void dthree(int y, int x){
    mvprintw(y, x,     " __ ");
    mvprintw(y + 1, x, "  _)");
    mvprintw(y + 2, x, " __)");
}

void dfour(int y, int x){
    mvprintw(y, x,     "    ");
    mvprintw(y + 1, x, "|__|");
    mvprintw(y + 2, x, "   |");
}

void dfive(int y, int x){
    mvprintw(y, x,     "  __");
    mvprintw(y + 1, x, " |_ ");
    mvprintw(y + 2, x, " __)");
}

void dsix(int y, int x){
    mvprintw(y, x,     " __ ");
    mvprintw(y + 1, x, "/__ ");
    mvprintw(y + 2, x, "\\__)");
}

void dseven(int y, int x){
    mvprintw(y, x,     " ___");
    mvprintw(y + 1, x, "   /");
    mvprintw(y + 2, x, "  / ");
}

void deight(int y, int x){
    mvprintw(y, x,     " __ ");
    mvprintw(y + 1, x, "(__)");
    mvprintw(y + 2, x, "(__)");
}

void dnine(int y, int x){
    mvprintw(y, x,     " __ ");
    mvprintw(y + 1, x, "(__\\");
    mvprintw(y + 2, x, " __/");
}

void dzero(int y, int x){
    mvprintw(y, x,     " __ ");
    mvprintw(y + 1, x, "/  \\");
    mvprintw(y + 2, x, "\\__/");
}

void dnumeral(int y, int x, int in){
    switch (in){
        case 1:
            done(y, x);
            break;
        case 2:
            dtwo(y, x);
            break;
        case 3:
            dthree(y, x);
            break;
        case 4:
            dfour(y, x);
            break;
        case 5:
            dfive(y, x);
            break;
        case 6:
            dsix(y, x);
            break;
        case 7:
            dseven(y, x);
            break;
        case 8:
            deight(y, x);
            break;
        case 9:
            dnine(y, x);
            break;
        case 0:
            dzero(y, x);
            break;
    }
}

int main(void){
    initscr();
    attron(A_BOLD);
    int row, col; 
    time_t timedump;
    struct tm* timeinfo;
    for (;;){
        clear();
        time(&timedump);
        timeinfo = localtime(&timedump);
        int sec = (*timeinfo).tm_sec % 10;
        int sec2 = (*timeinfo).tm_sec / 10;
        int min = (*timeinfo).tm_min % 10;
        int min2 = (*timeinfo).tm_min / 10;
        int hour = (*timeinfo).tm_hour % 10;
        int hour2 = (*timeinfo).tm_hour / 10;
        int wday = (*timeinfo).tm_wday;
        int mon = (*timeinfo).tm_mon;
        int mday = (*timeinfo).tm_mday % 10;
        int mday2 = (*timeinfo).tm_mday / 10; 
        getmaxyx(stdscr, row, col); 
        numeral((row / 2) - 4, (col / 2) + 21, sec);
        numeral((row / 2) - 4, (col / 2) + 12, sec2);
        numeral((row / 2) - 4, (col / 2 ), min);
        numeral((row / 2) - 4, (col / 2) - 9, min2);
        numeral((row / 2) - 4, (col / 2) - 21, hour);
        numeral((row / 2) - 4, (col / 2) - 30, hour2);
        weekday((row / 2) + 3, (col / 2) - 24, wday);
        dnumeral((row / 2) + 3, (col / 2), mday);
        dnumeral((row / 2) + 3, (col / 2) - 4, mday2);  
        month((row / 2) + 3, (col / 2) + 6, mon);
        move(0, 0);
        refresh();
        sleep(1);
    }
}
