JumpyJacko's Personal ferris/sweep layout
---

This keymap is kind of based off of winterNebs' ferris/sweep layout in the way it uses its layers. Obviously, very different with exactly where things are placed.

# The Layout Diagrams
### Main Layout
```
Colemak Layer
,-----------------------------.        ,-----------------------------.
|  q  |  w  |  f  |  p  |  g  |        |  j  |  l  |  u  |  y  |  ;  |
|-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----|
|  a  |  r  |  s  |  t  |  d  |        |  h  |  n  |  e  |  i  |  o  |
|-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----|
|  z  |  x  |  c  |  v  |  b  |        |  k  |  m  |  ,  |  .  |  /  |
`-----------------------------|        |-----------------------------'
                  | ent |bkspc|        | spc | tab |
                  '-----------'        '-----------'

QWERTY Layer
,-----------------------------.        ,-----------------------------.
|  q  |  w  |  e  |  r  |  t  |        |  y  |  u  |  i  |  o  |  p  |
|-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----|
|  a  |  s  |  d  |  f  |  g  |        |  h  |  j  |  k  |  l  |  ;  |
|-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----|
|  z  |  x  |  c  |  v  |  b  |        |  n  |  m  |  ,  |  .  |  /  |
`-----------------------------|        |-----------------------------'
                  | ent |bkspc|        | spc | tab |
                  '-----------'        '-----------'

Numbers and Symbols Layer (Basically Stolen from winternebs)
,-----------------------------.        ,-----------------------------.
|  1  |  2  |  3  |  4  |  5  |        |  6  |  7  |  8  |  9  |  0  |
|-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----|
|  $  |  +  |  (  |  )  |  @  |        |  |  |  -  |  =  |  _  |  *  |
|-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----|
|  !  |  #  |  {  |  }  |  ~  |        |  &  |  [  |  ]  |  %  |  ^  |
`-----------------------------|        |-----------------------------'
                  |~NUM~|bkspc|        | spc | tab |
                  '-----------'        '-----------'

Fn, Nav, and Media Layer
,-----------------------------.        ,-----------------------------.
| Fn1 | Fn2 | Fn3 | Fn4 | Fn5 |        | Fn6 | Fn7 | Fn8 | Fn9 | F10 |
|-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----|
| F11 |VolUp|VolDn|Mute | --- |        |Left |Down | Up  |Right| F12 |
|-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----|
|Medi>|MediP|MediS|Medi<| --- |        |  \  |  `  | --- | --- | --- |
`-----------------------------|        |-----------------------------'
                  | ent |bkspc|        | spc |~NAV~|
                  '-----------'        '-----------'

 Adjust Layer (NUMS + NAV)
,-----------------------------.        ,-----------------------------.
| --- |RClik| MsU |LClik| --- |        | --- | --- | --- | --- |tNKRO|
|-----|-----+-----+-----+-----|        |-----+-----+-----+-----+-----|
| --- | MsL | MsD | MsR | --- |        |mWhlL|mWhlD|mWhlU|mWhlR| --- |
|-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----|
| --- | --- |ARTSE|QWERT|ALPHA|        | --- | --- | --- | --- | --- |
`-----------------------------|        |-----------------------------'
                  |~NUM~|bkspc|        | spc |~NAV~|
                  '-----------'        '-----------'
```

### Combos
- Backspace + Space = Escape
- Space + O = ' and "
- Space + / = \
- Space + ; = Delete
- Z + C = Control + C (Copy),  Yoinked from QMK Combo Docs
- X + V = Control + V (Paste), Yoinked from QMK Combo Docs


### ARTSEYIO
More info about ARTSEYIO at [their website](https://artsey.io). The rest of the ARTSEY layout can be found in this repo [here](https://github.com/JumpyJacko/qmk_firmware/blob/master/keyboards/ferris/keymaps/JumpyJacko/keymap.c).
```
Artsey Base Layer
,-----------------------------.        ,-----------------------------.
|  s  |  t  |  r  |  a  | --- |        | --- |  a  |  r  |  t  |  s  |
|-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----|
|  o  |  i  |  y  |  e  | --- |        | --- |  e  |  y  |  i  |  o  |
|-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----|
| --- | --- | --- | --- | --- |        | --- | --- | --- | --- | --- |
`-----------------------------|        |-----------------------------'
                  |ALPHA| spc |        | spc |ALPHA|
                  '-----------'        '-----------'
```