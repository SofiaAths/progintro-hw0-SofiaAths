# progintro-hw0-SofiaAths
## Παιχνίδια με Κονσόλα (cmdline - 30 Μονάδες)

## byte0: Αλλάζοντας Φάκελο (cd)
- Η απαντήση είναι: i_wanna_be 
- Πώς το βρήκα: Με την εντολή ls
## byte1: Μια Άγνωστη Εντολή
- Η απαντήση είναι: The output is not a manual page - look elsewhere
- Πώς το βρήκα: Με την εντολή supercalifragilisticexpialidocious
## byte2: Τα Άπαντα του Shakespeare (grep): 
Πάτησα την εντολή:
-  grep "will find" *
και μου εμφάνισε:
- He that sweetest rose will find
    That draw his knives i' th' war. Well, I will find him;
    If circumstances lead me, I will find
    But I will find him when he lies asleep,
    The Cardinal instantly will find employment,
    In time will find their fit rewards. That seal
    Cranmer will find a friend will not shrink from him.
    If you do love me, you will find me out.
    I will find you twenty lascivious turtles ere one chaste
  FORD.  [Aside]  I will be patient; I will find out this.
  THESEUS. She will find him by starlight. Here she comes; and her
    when she is sated with his body, she will find the error of her
    required conveniences, her delicate tenderness will find itself
    Post you to London, and you will find it so;
No one will find this: grep_is_your_friend
  Fellow. I have a head, sir, that will find out logs
    Can couch for fear but I will find them out;
    will breed no terror in the youth: he will find it comes from a
    The crown will find an heir. Great Alexander
## byte3: Τα Άπαντα του Shakespeare Άλλαξαν (diff): 
Χρησιμοποιήσα την εντολή: 
- diff shakespeare.txt shakespeare.modified.txt
και η απάντηση ήταν αυτή: 
- And all the men and women merely players;
- And all the men and women merely programmers;
## byte4: Λαβύρινθος (find): 
Χρησιμοποιήσα την εντολή find . -name "cup.txt" και η απάντηση ήταν: ./maze/left/right/8/cup.txt
## byte5: Compile and Run (gcc): 
Χρησιμοποιήσα τις εντολές: 
- mkdir /tmp/myfolder
- cp byte5.c /tmp/myfolder
- cd /tmp/myfolder
- gcc byte5.c -o byte5_program
- ./byte5_program
και η απάντηση ήταν:
- Usage: ./byte5_program <SDI>
## byte6: Αποσυμπίεση αρχείου 1 (unzip): 
Χρησιμοποιήσα την εντολή:
- unzip byte6.zip
## byte7: Αποσυμπίεση αρχείου 2 (tar): 
Χρησιμοποιήσα την εντολή:
- tar -xzvf byte7.tar.gz byte7.txt
## byte8: Carriage Return (xxd, pico, vim): 
Χρησιμοποιήσα την εντολή:
- xxd carriage_return.txt
  και  η απάντηση ήταν: 
00000000: ffef bb20 6e6f 5f6d 6f72 655f 7365 6372  ... no_more_secr
00000010: 6574 735f 6672 6f6d 5f79 6f75 2020 2020  ets_from_you    
00000020: 2020 2020 2020 2020 2020 2020 2020 2020                  
00000030: 2020 2020 2020 2020 2020 2020 2020 2020                  
00000040: 2020 2020 0d54 6865 7265 2069 7320 6162      .There is ab
00000050: 736f 6c75 7465 6c79 206e 6f74 6869 6e67  solutely nothing
00000060: 2074 6f20 7365 6520 6865 7265 2e20 4d6f   to see here. Mo
00000070: 7665 2061 6c6f 6e67 2e20 2020 2020 2020  ve along.       
00000080: 2020 2020 2020 2020 2020 2020 2020 2020                  
00000090: 2020 2020 2020 2020 2020 2020 2020 2020                  
000000a0: 2020 2020 200a 
## byte9: Ένα Περίεργο Όνομα (cat): 
Χρησιμοποιήσα τις εντολές: 
- ls
-  /home/byte9
  και η απάντηση ήταν:
-  -bash: /home/byte9: Is a directory
## byte10: Το 10ο Όνομα (sort, head): 
Χρησιμοποιήσα την εντολή: 
- sort names.txt | head -n 10 | tail -n 1
και η απάντηση ήταν:
- Adorne
## byte11: Επιλογές Ονόματος (sort, uniq): 
Χρησιμοποιήσα την εντολή:
- sort births.txt | uniq -c | sort -nr | head -n 1
  και η απάντηση ήταν:
- 9 Kelley

# Πρόβλημα του Τρόλεϊ

Αυτό το πρόγραμμα προσομοιώνει το ηθικό δίλημμα του τρόλεϊ για αυτόνομα οχήματα, επιλέγοντας την κατεύθυνση με το χαμηλότερο κόστος.

## Τεχνικές Προδιαγραφές
- Το πρόγραμμα διαβάζει κόστη για δύο κατευθύνσεις (αριστερά και δεξιά).
- Αν το κόστος είναι μικρότερο για την αριστερή κατεύθυνση, το πρόγραμμα εκτυπώνει `Go left`, ενώ αν είναι μικρότερο για τη δεξιά, εκτυπώνει `Go right`.
- Σε περίπτωση που τα κόστη είναι ίσα, επιλέγει την αριστερή κατεύθυνση.
- Η είσοδος τερματίζεται με EOF και ο κωδικός εξόδου είναι `0`.
- Αν δοθεί μόνο το κόστος για την αριστερή κατεύθυνση, το πρόγραμμα τυπώνει μήνυμα σφάλματος και τερματίζει με κωδικό εξόδου `1`.

## Μεταγλώττιση

Για μεταγλώττιση χρησιμοποιώ την ακόλουθη εντολή:

- gcc -O0 -m32 -Wall -Wextra -Werror -pedantic -o trolley trolley.c

Αυτό θα δημιουργήσει ένα εκτελέσιμο αρχείο trolley, το οποίο μπορείς να εκτελέσεις με την εντολή:

- ./trolley

## Παραδείγματα Χρήσης και Έξοδοι:
./trolley

- Please enter the cost of going left: 10
- Please enter the cost of going right: 100
-   Go left.
- Please enter the cost of going left: 41
- Please enter the cost of going right: 42
-   Go left.
- Please enter the cost of going left: 42
- Please enter the cost of going right: 41
-   Go right.
- Please enter the cost of going left: 1000000
- Please enter the cost of going right: 1000000
-   Go left.
- Please enter the cost of going left: [EOF]

- linux10:/home/users/sdi2100283>./trolley
- Please enter the cost of going left: 42
- Please enter the cost of going right: No right cost provided.
- No right cost provided.
- linux10:/home/users/sdi2100283> echo $?
- 1
- linux10:/home/users/sdi2100283>./trolley
- Please enter the cost of going left: 10000000000
- Please enter the cost of going right: 4
- Go right.
- Please enter the cost of going left: -4
- Please enter the cost of going right: -4
- Go left.
- Please enter the cost of going left: 1000000000
- Please enter the cost of going right: 4000000000
- Go left.
- Please enter the cost of going left: Terminating.
- No right cost provided.
- Please enter the cost of going right: linux10:/home/users/sdi2100283> echo $?
- 1
- linux10:/home/users/sdi2100283>

Σε περίπτωση EOF, το πρόγραμμα τερματίζει με κωδικό εξόδου 0. Αν δοθεί μόνο το left_cost χωρίς το right_cost, τυπώνεται μήνυμα λάθους και το πρόγραμμα τερματίζει με κωδικό εξόδου 1.

