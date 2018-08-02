/*
 * sprites.h
 *
 *  Created on: Aug 2, 2018
 *      Author: Daniel Knezevic
 */

#ifndef SPRITES_H_
#define SPRITES_H_

#define HORIZON_LINE_WIDTH          128
#define HORIZON_LINE_HEIGHT         2
#define HORIZON_LINE_BUMP1_X        40
#define HORIZON_LINE_BUMP1_WIDTH    4
#define HORIZON_LINE_BUMP2_X        105
#define HORIZON_LINE_BUMP2_WIDTH    6

#define TREX_PADDING_RIGHT          10
#define TREX_STANDING_CLEARENCE_MIN 2
#define TREX_STANDING_CLEARENCE_MAX 9
#define TREX_DUCKING_CLEARENCE_MIN  3
#define TREX_DUCKING_CLEARENCE_MAX  10


#define TREX_STANDING_WIDTH     14
#define TREX_STANDING_HEIGHT    14
static const __flash uint8_t trex_standing_init[] =
{
    0xfc, 0xe0, 0xc0, 0xe0, 0xe0, 0xf0, 0xfe, 0xff, 0xfd, 0x5f, 0xd7, 0x17, 0x07, 0x06,
    0x01, 0x03, 0x07, 0x3f, 0x2f, 0x07, 0x3f, 0x23, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00
};
// width & height same as for trex_standing_init
static const __flash uint8_t trex_running1[] =
{
    0xfc, 0xe0, 0xc0, 0xe0, 0xe0, 0xf0, 0xfe, 0xff, 0xfd, 0x5f, 0xd7, 0x17, 0x07, 0x06,
    0x01, 0x03, 0x07, 0x1f, 0x17, 0x07, 0x3f, 0x23, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00
};
// width & height same as for trex_standing_init
static const __flash uint8_t trex_running2[] =
{
    0xfc, 0xe0, 0xc0, 0xe0, 0xe0, 0xf0, 0xfe, 0xff, 0xfd, 0x5f, 0xd7, 0x17, 0x07, 0x06,
    0x01, 0x03, 0x07, 0x3f, 0x2f, 0x07, 0x0f, 0x0b, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00
};
// width & height same as for trex_standing_init
static const __flash uint8_t trex_dead[] =
{
    0xfc, 0xe0, 0xc0, 0xe0, 0xe0, 0xf0, 0xfe, 0xfb, 0xf5, 0x5b, 0xd7, 0x17, 0x07, 0x06,
    0x01, 0x03, 0x07, 0x3f, 0x2f, 0x07, 0x3f, 0x23, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00
};

#define TREX_DUCKING_WIDTH  22
#define TREX_DUCKING_HEIGHT 9
static const __flash uint8_t trex_ducking1[] =
{
    0x03, 0x06, 0x0e, 0x1c, 0xfc, 0x7c, 0x3e, 0x1e, 0x7e, 0x5e, 0x1e, 0x7e, 0x5c, 0x0c, 0x1e, 0x1d, 0x1f, 0x1f, 0x17, 0x17, 0x07, 0x06,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
static const __flash uint8_t trex_ducking2[] =
{
    0x03, 0x06, 0x0e, 0x1c, 0x7c, 0x5c, 0x3e, 0xfe, 0x7e, 0x7e, 0x1e, 0x7e, 0x5c, 0x0c, 0x1e, 0x1d, 0x1f, 0x1f, 0x17, 0x17, 0x07, 0x06,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

#define PTERODACTYL_WIDTH   11
#define PTERODACTYL_HEIGHT  10
static const __flash uint8_t pterodactyl1[] =
{
    0x10, 0x18, 0x1c, 0x30, 0x7f, 0xfe, 0xfc, 0xf8, 0xa0, 0xa0, 0x20,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
static const __flash uint8_t pterodactyl2[] =
{
    0x10, 0x18, 0x1c, 0x3c, 0xf0, 0xf0, 0xf0, 0xf0, 0xa0, 0xa0, 0x20,
    0x00, 0x00, 0x00, 0x00, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00
};

#define CACTUS1_WIDTH   5
#define CACTUS1_HEIGHT  8
static const __flash uint8_t cactus1[] =
{
    0x1c, 0x10, 0xfe, 0x20, 0x3c
};

#define CACTUS2_WIDTH   5
#define CACTUS2_HEIGHT  8
static const __flash uint8_t cactus2[] =
{
    0x0c, 0x08, 0xff, 0x10, 0x1c
};

#define CACTUS3_WIDTH   6
#define CACTUS3_HEIGHT  9
static const __flash uint8_t cactus3[] =
{
    0x0e, 0x08, 0xfe, 0xff, 0x20, 0x38,
    0x00, 0x00, 0x01, 0x01, 0x00, 0x00
};

#define CACTUS4_WIDTH   11
#define CACTUS4_HEIGHT  7
static const __flash uint8_t cactus4[] =
{
    0x0c, 0x08, 0x7e, 0x10, 0x1c, 0x00, 0x0e, 0x08, 0x7f, 0x10, 0x1c
};

#define DIGIT_WIDTH     4
#define DIGIT_HEIGHT    6
static const __flash uint8_t digits[] =
{
    0x00, 0x1f, 0x11, 0x1f, // '0'
    0x00, 0x00, 0x00, 0x1f, // '1'
    0x00, 0x1d, 0x15, 0x17, // '2'
    0x00, 0x15, 0x15, 0x1f, // '3'
    0x00, 0x07, 0x04, 0x1f, // '4'
    0x00, 0x17, 0x15, 0x1d, // '5'
    0x00, 0x1f, 0x15, 0x1d, // '6'
    0x00, 0x01, 0x01, 0x1f, // '7'
    0x00, 0x1f, 0x15, 0x1f, // '8'
    0x00, 0x17, 0x15, 0x1f, // '9'
};

#define HI_SCORE_STR_WIDTH  8
#define HI_SCORE_STR_HEIGHT 6
static const __flash uint8_t hi_score_str[] =
{
    0x00, 0x1f, 0x04, 0x1f,   // 'H'
    0x00, 0x11, 0x1f, 0x11,   // 'I'
};

#endif /* SPRITES_H_ */
