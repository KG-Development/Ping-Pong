<!doctype html>
<html lang="en">
  <head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">

    <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@4.6.0/dist/css/bootstrap.min.css" integrity="sha384-B0vP5xmATw1+K9KRQjQERJvTumQW0nPEzvF6L/Z6nronJ3oUOFUFpCjEUQouq2+l" crossorigin="anonymous">
    <script type="text/javascript" src="script.js"></script>
    <link rel="shortcut icon" href="favicon.ico">
    <title>Calculator with function list</title>
  </head>
  <body>
    <div class="container">
        <h1 class="text-center">Calculator with FunctionList</h1>
        <div class="row">
            <div class="col-md-4">
        
            </div>
            <div class="col-md-4">
                <label for="operand1" class="text-left">Operand 1:</label>
                <input type="number" id="operand1">
                <label for="operand2" class="text-left">Operand 2:</label>
                <input type="number" id="operand2">
                <label for="operator" class="text-left">Operator: &nbsp;&nbsp;</label>
                <select id="operator" class="text-right">
                    <option value="+">Add (+)</option>
                    <option value="-">Substract (-)</option>
                    <option value="/">Divide (/)</option>
                    <option value="*">Multiply (*)</option>
                </select>
                <button class="btn btn-primary" onclick="calculateValue()">Calculate</button><br/><br/><br/>
                <div>
                    <p class="text-left" id="output">Result: </p>
                </div>
            </div>
            <div class="col-md-4">
        
            </div>
        </div>
    </div>
    <script src="https://code.jquery.com/jquery-3.5.1.slim.min.js" integrity="sha384-DfXdz2htPH0lsSSs5nCTpuj/zy4C+OGpamoFVy38MVBnE+IbbVYUew+OrCXaRkfj" crossorigin="anonymous"></script>
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@4.6.0/dist/js/bootstrap.bundle.min.js" integrity="sha384-Piv4xVNRyMGpqkS2by6br4gNJ7DXjqk09RmUpJ8jgGtD7zP9yug3goQfGII0yAns" crossorigin="anonymous"></script>
  </body>
</html>

<<<<<<< HEAD
=======


## What is working right now?
* basic I/O
* basic playing field
* basic render engine
* basic game loop
>>>>>>> parent of 8c9f19b (Update README.md)
