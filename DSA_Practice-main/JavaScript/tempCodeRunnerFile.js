while (true) {
     showQuestions();
     const choice = readInput.question("Do you want to continue? (y/n): ");
     if (choice === "n") {
          break;
     }
}