Αυτό το πρόγραμμα προσομοιώνει το ηθικό δίλημμα του τρόλεϊ για αυτόνομα οχήματα, επιλέγοντας την κατεύθυνση με το χαμηλότερο κόστος.

## Τεχνικές Προδιαγραφές
- Το πρόγραμμα διαβάζει κόστη για δύο κατευθύνσεις (αριστερά και δεξιά).
- Αν το κόστος είναι μικρότερο για την αριστερή κατεύθυνση, το πρόγραμμα εκτυπώνει `Go left`, ενώ αν είναι μικρότερο για τη δεξιά, εκτυπώνει `Go right`.
- Σε περίπτωση που τα κόστη είναι ίσα, επιλέγει την αριστερή κατεύθυνση.
- Η είσοδος τερματίζεται με EOF και ο κωδικός εξόδου είναι `0`.
- Αν δοθεί μόνο το κόστος για την αριστερή κατεύθυνση, το πρόγραμμα τυπώνει μήνυμα σφάλματος και τερματίζει με κωδικό εξόδου `1`.

## Μεταγλώττιση

Χρησιμοποιήστε την ακόλουθη εντολή για μεταγλώττιση:
gcc -O0 -m32 -Wall -Wextra -Werror -pedantic -o trolley trolley.c

Αυτό θα δημιουργήσει ένα εκτελέσιμο αρχείο trolley, το οποίο μπορείς να εκτελέσεις με την εντολή:
./trolley

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
- Go right.
- Please enter the cost of going left: 1000000
- Please enter the cost of going right: 1000000
- Go left.
- Please enter the cost of going left: [EOF]

linux10:/home/users/sdi2100283>./trolley
Please enter the cost of going left: 42
Please enter the cost of going right: No right cost provided.
No right cost provided.
linux10:/home/users/sdi2100283> echo $?
1
linux10:/home/users/sdi2100283>./trolley
Please enter the cost of going left: 10000000000
Please enter the cost of going right: 4
Go right.
Please enter the cost of going left: -4
Please enter the cost of going right: -4
Go left.
Please enter the cost of going left: 1000000000
Please enter the cost of going right: 4000000000
Go left.
Please enter the cost of going left: Terminating.
No right cost provided.
Please enter the cost of going right: linux10:/home/users/sdi2100283> echo $?
1
linux10:/home/users/sdi2100283>

Σε περίπτωση EOF, το πρόγραμμα τερματίζει με κωδικό εξόδου 0. Αν δοθεί μόνο το left_cost χωρίς το right_cost, τυπώνεται μήνυμα λάθους και το πρόγραμμα τερματίζει με κωδικό εξόδου 1.

