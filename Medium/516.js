var i, s;

function palindrom(str, start, end) {
  if (start === end) {
    return 1;
  }

  if (start > end) {
    return 0;
  }

  if (start === end - 1) {
    return 1;
  }

  if (str[start] === str[end]) {
    console.log("+1");
    return 2 + palindrom(s, start + 1, end - 1);
  } else {
    return Math.max(palindrom(s, start + 1, end), palindrom(s, start, end - 1));
  }
}

s = "aslodjflasjdflkjasdfglashjdflasjdlfj";
i = palindrom(s, 0, s.length - 1);
console.log("");
console.log("*" * 15);
console.log(i);