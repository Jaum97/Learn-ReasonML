type payload =
  | BadResult(int)
  | GoodResult(string)
  | NoResult;
  
 let data = GoodResult("Product shipped!");

let message =
  switch (data) {
  | GoodResult(theMessage) => "Success! " ++ theMessage
  | BadResult(errorCode) => "Something's wrong. The error code is: " ++ string_of_int(errorCode)
  };
  
//Warning 8: this pattern-matching is not exhaustive.
//Here is an example of a value that is not matched:
//NoResult

switch (myList) {
| [] => print_endline("Empty list")
| [a, ...theRest] => print_endline("list with the head value " ++ a)
};

switch (myArray) {
| [|1, 2|] => print_endline("This is an array with item 1 and 2")
| [||] => print_endline("This array has no element")
| _ => print_endline("This is an array")
};

let reply =
  switch (message) {
  | "Reason's pretty cool" => "Yep"
  | "good night" => "See ya!"
  | "hello" | "hi" | "heya" | "hey" => "hello to you too!"
  | _ => "Nice to meet you!"
  };
