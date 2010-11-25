# bcrypt hash

## Description

Minimal wrapper around bcrypt hashing functions from Open BSD
to have simple to use binaries for GNU/Linux systems.


## Usage

### bcrypt_hash
Returns (print on stdout) hashed string using bcrypt algorithm. The salt is automatically generated.

  * Arguments:
     * nb_rounds: number of rounds to compute the hash (between 4 and 31).
     * password: string to hash.

#### Example

    ./bcrypt_hash 10 'My secret password'
    $2a$10$HUqz9MWxF9ZBOmdk3uPEz.wXCt19MN7Fs.KGpkJumR8ahHrah3Qcy


### bcrypt_check
Check a password over a hash. Returns 1 (prints on stdout) if hash corresponds, 0 otherwise.

 * Arguments:
     * hash: hash string.
     * password: string to check against hash.

#### Example

Right password:

    ./bcrypt_check '$2a$10$HUqz9MWxF9ZBOmdk3uPEz.wXCt19MN7Fs.KGpkJumR8ahHrah3Qcy' 'My secret password'
    1

Wrong password:

    ./bcrypt_check '$2a$10$HUqz9MWxF9ZBOmdk3uPEz.wXCt19MN7Fs.KGpkJumR8ahHrah3Qcy' 'Wrong password'
    0

## Installation

### Dependencies: 

  * lib-bsd

### Compilation

 Just invoke "make".

