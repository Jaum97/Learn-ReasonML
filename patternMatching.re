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
