# A BASIC LINUX INTERPRETER

## Compilation and Usage

### 1. Compilation
* First clone the repository.
> `
> git clone https://<YOUR_PAT>@github.com/mbunifu/simple_shell.git
`
* After cloning the repository, change your current working directory to the just cloned directory and compile the source files using the following commands.
did just that

> ```
> (eddy@Xandex-PC)-[~]
> -$ cd simple_shell
>
> (eddy@Xandex-PC)-[~/simple_shell]
> -$ gcc *.c -o hsh
>
> (eddy@Xandex-PC)-[~/simple_shell]
> -$
> ```


### 2. Usage
* To run simply type ./hsh
> ```
> (eddy@Xandex-PC)-[~/simple_shell]
> -$ ./hsh
> $
> ```

* To exit just type `exit` or hit 'Ctrl+D'.

## Unsuported features

* The following features have not yet been implemented
  1. Shell I/O Redirection
  2. Piping
* and some other features.

# For Contributors
* To push back to the repo do the following
```
(eddy@Xandex-PC)-[~/simple_shell]
-$ git push -u origin master
```
