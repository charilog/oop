//--------------- FRAC.H ---------------

class Fraction
{
    friend bool Equals(const Fraction &x, const Fraction &y);
    friend Fraction Add(const Fraction &x, const Fraction &y);

public:
    Fraction();                 //  Θέτει numerator = 0, denominator = 1.
    Fraction(int n, int d = 1); // κατασκευαστής με παραμέτρους

    // τυπικές ρουτνίες εισόδου/εξόδου
    void Input();      // εισαγωγή ενός κλάσματος από το πλητρολόγιο
    void Show() const; // απεικόνιση ενός κλάσματος στην οθόνη

    // προσπελαστές (accessors)
    int GetNumerator() const;
    int GetDenominator() const;

    // μεταλλάκτης (mutator)
    bool SetValue(int n, int d); // ορισμός της τιμής του κλάσματος μέσω παραμέτρων

    double Evaluate() const; // επιστροφή της δεκαδικής τιμής του κλάσματος

private:
    int numerator;   // αριθμητής (οποιοσδήποτε ακέραιος)
    int denominator; // παρονομαστής πρέπει να μην είναι μηδέν
};
