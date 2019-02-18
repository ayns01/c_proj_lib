C project 
===============

libvc library
------


#### RULES / SUGGESTIONS

1. to start coding please create a new branch
    - as suggestion it can be your name
2. push the created code on this repository and create a pull request
3. assign somebody to review your code
4. assign this pull request project to ***function_implementation***

###### SUGGESTIONS


 -  for any function reite a test function 
 - the test function must have the **test_** prefix, like **test_vc_isupper**
 - the function should start with the folowing function **print_init("test_vc_isupper\0");**
     - the paramiter of the function is the name of the tested function
 - the function should end with **print_end();**
 - use **test_result** function to print the result of the test
    - as a paramiter it accept **TRUE** or **FALSE** from *vc_helper.h*

```c
void test_vc_isupper()
{
    print_init("test_vc_isupper\0");
    test_result(vc_isupper('Z') == TRUE);
    test_result(vc_isupper('A') == TRUE);
    test_result(vc_isupper('P') == TRUE);
    test_result(vc_isupper('a') != TRUE);
    test_result(vc_isupper('r') != TRUE);
    print_end();
}

```

 - please call all the function in the main method
 
 

```c
int main()
{
    test_vc_isupper();
    return 0;
}

```