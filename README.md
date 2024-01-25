# Wired
  A[Start] --> B{User or Hotel Staff?}
    B -- 1 --> C[Sign Up]
    C --> D[Validate Input]
    D --> E[Choose Room Type]
    E --> F{Room Available?}
    F -- Yes --> G[Reserve Room]
    G --> H[Success Message]
    H --> I[Continue?]
    I -- Yes --> B
    I -- No --> J[End]
    B -- 2 --> K[Hotel Rooms Status]
    K --> I
    B -- 2 --> L[Search Patron by Name]
    L --> I
    B -- 2 --> M[Search Patron by Reservation Code]
    M --> I
