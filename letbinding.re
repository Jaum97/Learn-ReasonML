let greeting = "hello!";
let score = 10;
let newScore = 10 + score;

if (displayGreeting) {
  let message = "Enjoying the docs so far?";
  print_endline(message)
};
/* `message` not accessible here! */

let message = "hello";
print_endline(message); /* Prints "hello" */
let message = "bye";
print_endline(message); /* Prints "bye" */

let message = {
  let part1 = "hello";
  let part2 = "world";
  part1 ++ " " ++ part2
};
/* `part1` and `part2` not accessible here! */
