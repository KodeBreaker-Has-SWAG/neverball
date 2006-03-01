#ifndef DEMO_H
#define DEMO_H

/*---------------------------------------------------------------------------*/

#define MAXDEMO 256

int         demo_scan(void);
const char *demo_pick(void);
const char *demo_name(int);
const char *demo_shot(int);
int         demo_coins(int);
int         demo_clock(int);
int         demo_state(int);
int         demo_mode(int);
const char *demo_player(int);
const char *demo_str_date(int);

int  demo_exists(char *);
void demo_unique(char *);

/*---------------------------------------------------------------------------*/

int  demo_play_init(const char *, const char *, const char *,
                    const char *, const char *, const char *,
                    int, int, int, int, int, int);
void demo_play_step(float);
void demo_play_stop(int, int, int);
int  demo_play_saved(void);
void demo_play_save(const char *);

/*---------------------------------------------------------------------------*/

int  demo_replay_init(const char *, int *, int *, int *, int *, int *);
int  demo_replay_step(float *);
void demo_replay_stop(int);

/*---------------------------------------------------------------------------*/

#endif
