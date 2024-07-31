<?php
$employeeSalaries = array
(
    "John" => 50000,
    "Alice" => 60000,
    "Bob" => 55000,
    "Emma" => 58000
);

echo "Employee Salaries:<br>";
foreach ($employeeSalaries as $name => $salary) 
{
    echo "$name: $salary<br>";
}
?>