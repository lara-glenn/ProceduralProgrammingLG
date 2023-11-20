#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * @brief Holds the data for a song such as artist, title and year.
 *
 */
typedef struct
{
    int position;
    //3 strings holding artist title and year
    char artist[100];
    char title[100];
    char year[4];
    //name of structure is called song data
} SONG_DATA;

/**
 * @brief Splits a line from song_data.txt into the separate data. This is adapted from the coursework code.
 *
 * @param input the line which will be split / the line from the file
 * @param delimiter the character which deliminates (splits up) the data
 * @param pos a pointer to where it should store the position
 * @param artist a pointer to where it should store the artist
 * @param title a pointer to where it should store the title
 * @param years a pointer to where it should store the years
 */

//pointers - to return multiple things from a function, you need to use pointers to make C store stuff
void tokeniseRecord(const char *input, const char *delimiter,
                    char *pos, char *artist, char *title, char *years)
{
    // Create a copy of the input string as strtok modifies the string
    char *inputCopy = strdup(input);

    // Tokenize the copied string
    char *token = strtok(inputCopy, delimiter);
    if (token != NULL)
    {
        strcpy(pos, token);
    }

    token = strtok(NULL, delimiter);
    if (token != NULL)
    {
        strcpy(artist, token);
    }

    token = strtok(NULL, delimiter);
    if (token != NULL)
    {
        strcpy(title, token);
    }

    token = strtok(NULL, delimiter);
    if (token != NULL)
    {
        strcpy(years, token);
    }

    // Free the duplicated string
    free(inputCopy);
}

int main()
{
    //making an array of song data strucs 
    //an array of 100 SONG_DATA strucs - in csw make as long as you like
    SONG_DATA songs[100];
    //making sure you have enough space/lots of small don't want it to be too small
    int buffer_size = 250;
    char line[buffer_size];
    int counter=0;

    //opening song_data.txt in read mode
    FILE *input = fopen("song_data.txt", "r");

    // creating some temporary storage:
    // pos will be converted to an int, but we'll be getting it as a string
    char pos[4];
    char artist[100];
    char title[100];
    char year[4];

    while (fgets(line, buffer_size, input))
    {   
        // first we will get the info from the line
        tokeniseRecord(line,",",pos,artist,title,year);
        // but then what??

        //songs[0].artist=artist;

        //copy from artists to destination artists
        strcpy(songs[counter].artist, artist);
        strcpy(songs[counter].title, title);
        strcpy(songs[counter].year, year);
        //want to convert string position into an integer
        songs[counter].position = atoi(pos);
        counter++;
        //now read all of data into array data struc 
    }

    printf("%d\n", counter);



    return 0;




}